/*
 * uart.h
 *
 *  Created on: Dec 2, 2024
 *      Author: tungn
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include <stdio.h>
#include "command.h"
#include "main.h"
#include "sensor.h"

#define UART_SIZE 10

extern uint8_t uartChar;
extern uint8_t uartBuffer[UART_SIZE];
extern uint8_t uartIndex;
extern unsigned char uartFlag;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void uartRead(void);
void uartSend(void);


#endif /* INC_UART_H_ */
