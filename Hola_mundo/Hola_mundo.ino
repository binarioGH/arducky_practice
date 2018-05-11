#include "HID-Project.h"
void setup() {
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_R);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("notepad.exe");
  Keyboard.press(KEY_ENTER);
  delay(500);
  Keyboard.print("Hola, mundo");
 
}

void loop() { 
}
