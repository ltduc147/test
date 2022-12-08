/*
 * led_traffic.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */

#include "led_traffic.h"
void setLEDRED1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0);
}
void setLEDYELLOW1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
}
void setLEDGREEN1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 0);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
}

void setLEDRED2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 0);
}
void setLEDYELLOW2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
}
void setLEDGREEN2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 1);
}

void setLEDRED3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 0);
}
void setLEDYELLOW3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 1);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 1);
}
void setLEDGREEN3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 0);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 1);
}

void clearLED1(){
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 0);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0);
}

void clearLED2(){
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, 0);
}

void clearLED3(){
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, 0);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, 0);
}

void display7SEG_a(int number){
	switch (number){
		case 0:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0040;
			break;
		case 1:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0079;
			break;
		case 2:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0024;
			break;
		case 3:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0030;
			break;
		case 4:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0019;
			break;
		case 5:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0012;
			break;
		case 6:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0002;
			break;
		case 7:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0078;
			break;
		case 8:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0000;
			break;
		case 9:
			GPIOB->ODR = ((GPIOB->ODR) & (0xff00)) | 0x0010;
			break;
		default:
			break;
	}
}

void display7SEG_b(int number){
	switch (number){
		case 0:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x4000;
			break;
		case 1:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x7900;
			break;
		case 2:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x2400;
			break;
		case 3:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x3000;
			break;
		case 4:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x1900;
			break;
		case 5:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x1200;
			break;
		case 6:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x0200;
			break;
		case 7:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x7800;
			break;
		case 8:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x0000;
			break;
		case 9:
			GPIOB->ODR = ((GPIOB->ODR) & (0x00ff)) | 0x1000;
			break;
		default:
			break;
	}
}

