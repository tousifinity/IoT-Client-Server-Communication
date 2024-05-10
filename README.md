# IoT Client Server Communication to Monitor Temperature, Humidity, and Distance

An ESP8266-based system to monitor temperature, humidity, and distance using sensors. The system consists of three main components:

1. **Client**: Displays temperature and humidity on an LCD screen.
2. **Server**: Hosts a web server that displays temperature and humidity data on a webpage.
3. **Server-Client**: Measures the distance using an ultrasonic sensor and displays it on an LCD screen.

## Components Used

- **ESP8266 WiFi Module**
- **DHT21 Sensor** (for Temperature and Humidity)
- **HC-SR04 Ultrasonic Sensor** (for Distance Measurement)
- **LCD Display (16x2) with I2C Interface**

## Libraries Used

- `ESP8266WiFi`
- `ESP8266HTTPClient`
- `LiquidCrystal_I2C`
- `ESPAsyncWebServer`
- `DHT.h`
- `Adafruit_Sensor`

## System Overview

### 1. Client (LCD Display)

This part of the system connects to a WiFi network, fetches the temperature and humidity from a server, and displays the data on an LCD screen every 5 seconds.

- The client sends HTTP GET requests to fetch temperature and humidity data from the server.
- The data is displayed on a 16x2 LCD screen connected to the ESP8266.

### 2. Server (Web Interface)

The server serves a web page showing the real-time temperature and humidity data. It updates every 10 seconds.

- The server reads data from the DHT21 sensor.
- The web page dynamically updates the temperature and humidity on the page using JavaScript and HTTP GET requests.




