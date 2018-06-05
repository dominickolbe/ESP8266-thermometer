# ESP8266-thermometer
thermometer basically based on ESP8266 12E - DHT22, LDR and SSD1306 OLED

## Hardware
* ESP8266 NodeMCU
* SSD1306 OLED Display
* DHT22 Sensor
* LDR

## Project setup

### IDE

I'm using `Visual Studio Code` and the `PlatformIO IDE` Plugin.

### Modifying the SSD1306 Driver

uncomment the line, that fits your display

`.piolibdeps/Adafruit SSD1306_ID135/Adafruit_SSD1306.h`
```
#define SSD1306_128_64
// #define SSD1306_128_32
// #define SSD1306_96_16
```
