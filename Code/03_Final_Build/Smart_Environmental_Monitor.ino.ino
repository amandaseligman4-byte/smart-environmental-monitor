#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_BME280 bme;
Adafruit_SSD1306 oled(128, 32, &Wire, -1);

void setup() {
Serial.begin(115200); //start communication between ESP32 and laptop at 115200 baud
bool/* (t/f) */status /*(variable name)*/ = bme.begin(0x76); /*(calls the method w/ address from I2C scanner. if sensor initializes successfully, status = true)*/

if (!status) {Serial.println("BME not found");}
else {Serial.println("BME found!");}

oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
oled.setTextSize(1);
oled.setTextColor(SSD1306_WHITE);
}

void loop() {

oled.clearDisplay();
oled.setCursor(0,0);

float temperature = (bme.readTemperature() * 9/5) + 32;
oled.print("Temperature: ");
oled.print(temperature);
oled.println(" F");


float humidity = bme.readHumidity();
oled.print("Humidity: ");
oled.print(humidity);
oled.println("%");

float pressure = bme.readPressure() / 100;
oled.print("Pressure: ");
oled.print(pressure);
oled.println(" hPa");

oled.display();

delay(2000);

}
