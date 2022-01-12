/*
 * buzzer.c
 *
 *  Created on: Jan 12, 2022
 *      Author: fatih.colak
 */
#include "gpio.h"
#include "main.h"

void systen_buzzer_on(void){

	// buzzer fonksiyon

// pb4
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);

}

void systen_buzzer_off(void){

	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);

}
