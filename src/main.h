#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>
#include <DHT_U.h>
#include <SPI.h>
#include <Wire.h>

#define PIN_DHT_Sensor D3
#define PIN_LDR_Sensor A0
#define PIN_SSD1306_RESET D0
#define DHTTYPE DHT22

Adafruit_SSD1306 display(PIN_SSD1306_RESET);
DHT_Unified dht(PIN_DHT_Sensor, DHTTYPE);

// SENSOR VALUES
float brightness = 0;
float temperature = 0;
float humidity = 0;
