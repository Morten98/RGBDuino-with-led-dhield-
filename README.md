
# NeoPixel Rainbow Effect

This project creates a smooth rainbow effect on a NeoPixel LED strip using an Arduino.

## Components Required

-   Arduino board (e.g., Arduino Uno, Nano, etc.)
-   Adafruit NeoPixel LED strip (80 LEDs in this example)
-   Power supply for the NeoPixel strip (if required)
-   Jumper wires
-   Breadboard (optional)

## Wiring Diagram

1.  Connect the data input pin of the NeoPixel strip to digital pin 6 on the Arduino.
2.  Connect the ground (GND) of the NeoPixel strip to the ground (GND) of the Arduino.
3.  Connect the power (VCC) of the NeoPixel strip to a suitable power supply (5V).

## Code Overview

The code initializes the NeoPixel strip and continuously displays a rainbow effect that moves from the bottom to the top of the strip.

### Key Functions

-   `setup()`: Initializes the NeoPixel strip and sets the brightness.
-   `loop()`: Continuously calls the  `rainbowEffect()`  function.
-   `rainbowEffect()`: Generates and displays the rainbow effect.
-   `Wheel()`: Generates colors for the rainbow effect.

## Usage

1.  Connect the components as described in the wiring diagram.
2.  Upload the code to your Arduino board.
3.  Observe the rainbow effect on the NeoPixel strip.

## Customization

-   Adjust brightness by changing the value in  `strip.setBrightness()`.
-   Modify the delay in the  `rainbowEffect()`  function to change the speed of the effect.
-   Change the number of pixels by modifying the  `NUMPIXELS`  definition.
