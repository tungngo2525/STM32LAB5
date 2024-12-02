/*
 * sensor.c
 *
 *  Created on: Dec 2, 2024
 *      Author: tungn
 */


#include "sensor.h"

uint32_t sensorValue = 0;

void sensorRead(void) {
    sensorValue = HAL_ADC_GetValue(&hadc1);
}
