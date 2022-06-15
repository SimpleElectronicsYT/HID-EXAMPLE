#include <Keyboard.h>                               //Including the keyboard library
#include <Mouse.h>                                  //Including the mouse library

int pinA = 2;                                       //Declaring variables for the pins
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;

void setup() {

pinMode(pinA, INPUT_PULLUP);                        //Setting up the internal pull-ups resistors
pinMode(pinB, INPUT_PULLUP);                        //and also setting the pins to inputs.
pinMode(pinC, INPUT_PULLUP);
pinMode(pinD, INPUT_PULLUP);
pinMode(pinE, INPUT_PULLUP);

}

void loop() {

  if (digitalRead(pinA) == LOW)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('A');                            //Sending the "A" character
    delay(500);
  }

  if (digitalRead(pinB) == LOW)                     //Checking if the second switch has been pressed
  {
    Keyboard.print("You pressed switch B");         //Sending a string
    delay(500);
  }

  if (digitalRead(pinC) == LOW)                     //Checking if the third switch has been pressed
  {
    Keyboard.println("You have pressed switch C."); //Sending a string and a return
    delay(500);
  }

  if (digitalRead(pinD) == LOW)                     //Checking if the fourth switch has been pressed
  {
    Mouse.press(MOUSE_RIGHT);                       //Pressing down the right click
    delay(100);
    Mouse.release(MOUSE_RIGHT);                     //Releasing the right click
    delay(500);
  }

  if (digitalRead(pinE) == LOW)                     //Checking if the fifth switch has been pressed
  {
    Keyboard.println("Subscribe to Simple Electronics!");
    delay(500);                                     //Sending a string and a return
  }
}
