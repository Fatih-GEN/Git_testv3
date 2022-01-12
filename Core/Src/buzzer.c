/*
 * buzzer.c
 *
 *  Created on: Jan 12, 2022
 *      Author: fatih.colak
 */
#include "buzzer.h"


void system_buzzer_on(void){

	// buzzer fonksiyon

// pb4
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);

}

void system_buzzer_off(void){

	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);

}
