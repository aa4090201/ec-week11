#include <BluetoothSerial.h>
BluetoothSerial BT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("GUNLINLIANG");//請改名
  pinMode(14,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available()) {
    //讀取藍芽資料
    String BTdata=BT.readString();
    if (BTdata=="LED OFF"){
      digitalWrite(14,LOW);
      }
      else digitalWrite(14,HIGH);
    //顯示在序列視窗
    Serial.println(BTdata);
  }
  delay(1);
}
