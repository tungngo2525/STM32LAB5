/*
 * command.h
 *
 *  Created on: Dec 2, 2024
 *      Author: tungn
 */

#ifndef INC_COMMAND_H_
#define INC_COMMAND_H_

#include <string.h>
#include "scheduler.h"
#include "uart.h"

void commandExecute(void);
void commandParser(void);

#endif /* INC_COMMAND_H_ */
