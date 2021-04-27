#include "ch.h"
#include "hal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <motors.h>
#include <chprintf.h>
#include <mesure.h>



void lumiere_eteinte(void){

	palSetPad(GPIOD, GPIOD_LED1);
	palSetPad(GPIOD, GPIOD_LED3);
	palSetPad(GPIOD, GPIOD_LED5);
	palSetPad(GPIOD, GPIOD_LED7);

}

void lumiere_demarrage(void){

	if(get_demarrage()==0)
		palClearPad(GPIOD, GPIOD_LED1);

	chThdSleepMilliseconds(300);// regler la rapidite du jeu de lumiere
	if(get_demarrage()==0){
	    palSetPad(GPIOD, GPIOD_LED1);
	    palClearPad(GPIOD, GPIOD_LED3);
	}
	chThdSleepMilliseconds(300);
	if(get_demarrage()==0){
	    palSetPad(GPIOD, GPIOD_LED3);
	    palClearPad(GPIOD, GPIOD_LED5);
	}
	chThdSleepMilliseconds(300);
	if(get_demarrage()==0){
	    palSetPad(GPIOD, GPIOD_LED5);
	    palClearPad(GPIOD, GPIOD_LED7);
    	chThdSleepMilliseconds(300);
	    palSetPad(GPIOD, GPIOD_LED7);
}

void lumiere_clignote(void)
{
	palTogglePad(GPIOD, GPIOD_LED1);
	palTogglePad(GPIOD, GPIOD_LED3);
	palTogglePad(GPIOD, GPIOD_LED5);
	palTogglePad(GPIOD, GPIOD_LED7);

}

void signal_fin(void)
{
	palClearPad(GPIOB, GPIOB_LED_BODY);
	chThdSleepMilliseconds(300);
	palSetPad(GPIOB, GPIOB_LED_BODY);
	chThdSleepMilliseconds(300);
	palClearPad(GPIOB, GPIOB_LED_BODY);
	chThdSleepMilliseconds(300);
	palSetPad(GPIOB, GPIOB_LED_BODY);
	chThdSleepMilliseconds(300);
	palClearPad(GPIOB, GPIOB_LED_BODY);
}