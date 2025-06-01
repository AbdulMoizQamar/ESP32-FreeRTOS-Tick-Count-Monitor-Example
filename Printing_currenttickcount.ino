#include <Arduino.h>



void TickTask(void *parameter) {
  while (1) {
    TickType_t tickCount = xTaskGetTickCount();
   

    Serial.printf("Tick count: %lu\n", tickCount);

    vTaskDelay(2000 / portTICK_PERIOD_MS);
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000); 


  xTaskCreate(
    TickTask,             // Task function
    "Tick Task",          // Task name
    2048,                 // Stack size in words
    NULL,                 // Parameter to pass
    1,                    // Task priority
    NULL      // Task handle
  );
}

void loop() {
}
