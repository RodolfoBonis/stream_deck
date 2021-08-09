#include <Arduino.h>
#include <Keyboard.h>

#include "settings.h"
#include "sdcard.h"
#include "buttons.h"

void setup()
{
  Serial.begin(9600);
  Keyboard.begin();
  startSdCard();
  startButtonsPins();
}

void loop()
{
  verifySdCardIsConnected();
  defineButtonsActions();
}