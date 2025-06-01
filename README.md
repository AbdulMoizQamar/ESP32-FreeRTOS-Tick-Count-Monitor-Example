# ESP32-FreeRTOS-Tick-Count-Monitor-Example
This simple project demonstrates how to access and print the FreeRTOS system tick count on an ESP32 using the Arduino framework.
📝 Description:
This simple project demonstrates how to access and print the FreeRTOS system tick count on an ESP32 using the Arduino framework.
A single task named TickTask is created, which repeatedly prints the current tick count every 2 seconds using xTaskGetTickCount().
It’s a minimal example ideal for understanding task timing and FreeRTOS internal tick behavior on the ESP32 platform.

✅ Features:
Uses xTaskGetTickCount() to monitor system ticks
Periodic task execution using vTaskDelay()
FreeRTOS multitasking on ESP32
Built with the Arduino environment

📦 Requirements:
ESP32 development board
Arduino IDE or PlatformIO
FreeRTOS (included in ESP32 Arduino core)
