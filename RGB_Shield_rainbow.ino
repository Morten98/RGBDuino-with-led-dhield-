#include <Adafruit_NeoPixel.h>

#define PIN 6 // Pin connected to the data line of the NeoPixel strip
#define NUMPIXELS 80 // Number of LEDs in the matrix (5 rows x 16 columns)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();  // Initialize the strip
  strip.setBrightness(30);  // Set brightness to 50 (dimmer effect)
  strip.show();   // Initialize all pixels to 'off'
}

void loop() {
  // Loop to show rainbow effect from bottom to top
  rainbowEffect();
}

void rainbowEffect() {
  // Generate a smooth rainbow from bottom to top (across 5 rows and 16 columns)
  for (int i = 0; i < NUMPIXELS; i++) {
    // Calculate the color for each pixel based on its position
    uint32_t color = Wheel((i + millis() / 10) & 255);
    strip.setPixelColor(i, color); // Set the pixel color
  }
  strip.show(); // Apply the changes to the strip
  delay(20);    // Adjust the speed of the rainbow effect
}

// Wheel function to generate a smooth rainbow effect
uint32_t Wheel(byte WheelPos) {
  if (WheelPos < 85) {
    return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
    WheelPos -= 170;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}
