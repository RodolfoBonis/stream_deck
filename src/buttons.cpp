#include <Arduino.h>
#include <Keyboard.h>

#include "settings.h"

int btn_1_state = HIGH;
int btn_2_state = HIGH;
int btn_3_state = HIGH;
int btn_4_state = HIGH;
int btn_5_state = HIGH;
int btn_6_state = HIGH;

void defineButtonsActions()
{
    int current_btn_1_state = digitalRead(BTN_1_PIN);
    int current_btn_2_state = digitalRead(BTN_2_PIN);
    int current_btn_3_state = digitalRead(BTN_3_PIN);
    int current_btn_4_state = digitalRead(BTN_4_PIN);
    int current_btn_5_state = digitalRead(BTN_5_PIN);
    int current_btn_6_state = digitalRead(BTN_6_PIN);

    if ((current_btn_1_state != btn_1_state) && (current_btn_1_state == HIGH))
    {
        Keyboard.press(KEY_RIGHT_CTRL);
        Keyboard.press(KEY_F13);
    }

    if ((current_btn_2_state != btn_2_state) && (current_btn_2_state == HIGH))
    {
        Keyboard.press(KEY_RIGHT_CTRL);
        Keyboard.press(KEY_F14);
    }

    if ((current_btn_3_state != btn_3_state) && (current_btn_3_state == HIGH))
    {
        Keyboard.press(KEY_RIGHT_CTRL);
        Keyboard.press(KEY_F15);
    }

    if ((current_btn_4_state != btn_4_state) && (current_btn_4_state == HIGH))
    {
        Keyboard.press(KEY_RIGHT_CTRL);
        Keyboard.press(KEY_F16);
    }

    if ((current_btn_5_state != btn_5_state) && (current_btn_5_state == HIGH))
    {
        Keyboard.press(KEY_RIGHT_CTRL);
        Keyboard.press(KEY_F17);
    }

    if ((current_btn_6_state != btn_6_state) && (current_btn_6_state == HIGH))
    {
        Keyboard.press(KEY_RIGHT_CTRL);
        Keyboard.press(KEY_F18);
    }

    btn_1_state = current_btn_1_state;
    btn_2_state = current_btn_2_state;
    btn_3_state = current_btn_3_state;
    btn_4_state = current_btn_4_state;
    btn_5_state = current_btn_5_state;
    btn_6_state = current_btn_6_state;

    delay(50);
    Keyboard.releaseAll();
}

void startButtonsPins()
{
    pinMode(BTN_1_PIN, INPUT_PULLUP);
    pinMode(BTN_2_PIN, INPUT_PULLUP);
    pinMode(BTN_3_PIN, INPUT_PULLUP);
    pinMode(BTN_4_PIN, INPUT_PULLUP);
    pinMode(BTN_5_PIN, INPUT_PULLUP);
    pinMode(BTN_6_PIN, INPUT_PULLUP);
}