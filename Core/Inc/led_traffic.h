/*
 * led_traffic.h
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */

#ifndef INC_LED_TRAFFIC_H_
#define INC_LED_TRAFFIC_H_

#include "main.h"

void setLEDRED1();
void setLEDYELLOW1();
void setLEDGREEN1();
void clearLED1();

void setLEDRED2();
void setLEDYELLOW2();
void setLEDGREEN2();
void clearLED2();

void setLEDRED3();
void setLEDYELLOW3();
void setLEDGREEN3();
void clearLED3();

void display7SEG_a(int number);
void display7SEG_b(int number);

#endif /* INC_LED_TRAFFIC_H_ */
