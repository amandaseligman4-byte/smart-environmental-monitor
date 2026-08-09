\# Smart Environmental Monitor



This project uses an ESP32 microcontroller and a BME280 sensor to measure temperature, humidity, and pressure of a given area. The readings are displayed on an 128x32 pixel OLED display.



\## Features



\- Measures temperature, humidity, and atmospheric pressure

\- Displays sensor readings on an 128x32 OLED screen

\- Converts temperature readings from Celsius to Fahrenheit

\- Updates measurements every 2 seconds

\- Uses I2C communication to connect with multiple devices on the same bus



\## Hardware



\- ESP32 development board

\- BME280 temperature, humidity, and pressure sensor

\- 128x32 SSD1306 OLED display

\- Breadboard

\- Jumper wires



\## Technical Details



\- Programmed the ESP32 in C++

\- Used I2C communication to connect with the BME280 and OLED display

\- Used an I2C scanner to identify and verify device addresses

\- Integrated multiple I2C peripherals on the same SDA/SCL bus

\- Used the Adafruit BME280, SSD1306, and GFX libraries

\- Converted raw pressure readings from Pa to hPa

\- Debugged hardware connections and sensor communication during development



\## Project Structure



\- `Code/01\_I2C\_Scanner` - I2C scanner used to identify connected devices

\- `Code/02\_OLED\_Hello` - Initial OLED display test

\- `Code/03\_Final\_Build` - Final integrated environmental monitor

\- `Photos/` - Photos of the hardware and completed project



\## How It Works



The ESP32 communicates with both the BME280 sensor and SSD1306 OLED display over I2C. The BME280 collects environmental data, which the ESP32 processes and displays on the OLED. The display refreshes every two seconds with updated temperature, humidity, and pressure readings.



\## Photos



\### Final Build



!\[Final environmental monitor](Photos/final\_build.jpg)



\### Wiring



!\[ESP32, BME280, and OLED wiring](Photos/wiring.jpg)



\## What I Learned



This project gave me experience with I2C communication, embedded C++, sensor interfacing, and integrating multiple peripherals with a microcontroller. I also practiced debugging hardware and software together by testing each component individually before combining them into the final system. As someone who had never touched C++ or Arduino before, this was a great beginning project!

