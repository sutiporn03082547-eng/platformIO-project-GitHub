#include <Arduino.h>

void setup() {
  // กำหนดสถานะขาหลอดไฟบนบอร์ดให้เป็น Output
  pinMode(LED_BUILTIN, OUTPUT);
  
  // เปิดการสื่อสารผ่าน Serial Monitor
  Serial.begin(9600);
  Serial.println("Update code successful!");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // เปิดหลอดไฟ
  delay(1000);                     // รอ 1 วินาที
  digitalWrite(LED_BUILTIN, LOW);  // ปิดหลอดไฟ
  delay(1000);                     // รอ 1 วินาที
}