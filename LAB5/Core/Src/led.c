/*
 * led.c
 *
 *  Created on: Dec 2, 2024
 *      Author: tungn
 */

#include "led.h"

void ledBlink(void) {
    HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

