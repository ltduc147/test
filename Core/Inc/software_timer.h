/*
 * software_timer.h
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timer_run();


#endif /* INC_SOFTWARE_TIMER_H_ */
