#include <SdFat.h>
#include <Arduino.h>

#include "settings.h"
#include "sdcard.h"

SdFat SD;

File configFile;

void startSdCard()
{
    setColor(255, 0, 255);

    delay(1000);
    pinMode(SD_PIN, INPUT);
    if (!SD.begin(SD_PIN))
    {
        setColor(255, 0, 0);
        return;
    }

    setColor(0, 255, 0);
}

void verifySdCardIsConnected()
{
    if (!SD.begin(SD_PIN))
    {
        setColor(255, 0, 0);
        return;
    }

    setColor(0, 255, 0);
}