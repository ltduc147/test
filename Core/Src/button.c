/*
 * button.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */

#include "button.h"

#define NUM_OF_BUTTONS 		4
#define TIME_FOR_LONGPRESS  150
#define BUTTON_PRESSED		GPIO_PIN_RESET
#define BUTTON_RELEASED 	GPIO_PIN_SET

int key1[NUM_OF_BUTTONS];
int key2[NUM_OF_BUTTONS];
int keybuffer[NUM_OF_BUTTONS];
int counter_Button[NUM_OF_BUTTONS];
int flagforLongPress[NUM_OF_BUTTONS];
int flagforPress[NUM_OF_BUTTONS];

int isButtonPress(int index){
	if (flagforPress[index] == 1){
		flagforPress[index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPress(int index){
	return (flagforLongPress[index] == 1);
}

void button_read(){
	for (int i = 0 ; i < NUM_OF_BUTTONS; i++){
		key1[i] = key2[i];
		if (i == 0){
			key2[i] = HAL_GPIO_ReadPin(A0_GPIO_Port, A0_Pin);
		}
		if (i == 1){
			key2[i] = HAL_GPIO_ReadPin(A1_GPIO_Port, A1_Pin);
		}
		if (i == 2){
			key2[i] = HAL_GPIO_ReadPin(A2_GPIO_Port, A2_Pin);
		}

		if (i == 3){
			key2[i] = HAL_GPIO_ReadPin(A3_GPIO_Port, A3_Pin);
		}

		if (key2[i] == key1[i]){
				if (keybuffer[i] != key2[i]){
					keybuffer[i] = key2[i];
					if (keybuffer[i] == BUTTON_PRESSED){
						flagforPress[i] = 1;
					} else {
						flagforLongPress[i] = 0;
						counter_Button[i] = 0;
					}
				} else {
					if (keybuffer[i] == BUTTON_PRESSED){
						if (counter_Button[i] < TIME_FOR_LONGPRESS ){
							counter_Button[i]++;
						} else {
							flagforLongPress[i] = 1;
						}
					}
				}
		}
	}
}
