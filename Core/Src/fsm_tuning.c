/*
 * fsm_tuning.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Admin
 */


#include "fsm_tuning.h"



void fsm_tuning_run(){
	switch(status){

		case TUNING_RED1:
			setLEDRED1();
			clearLED2();
			if(isButtonPress(2)){
				RED_INC++;
				display7SEG_a(RED_INC / 10);
				display7SEG_b(RED_INC % 10);
			}

			if (isButtonLongPress(2)){
				if (timer1_flag == 1){
					RED_INC--;
					display7SEG_a(RED_INC / 10);
					display7SEG_b(RED_INC % 10);
					setTimer1(200);
				}
			}
			if(isButtonPress(3)){
				red_time_1+=RED_INC;
			}
			if(isButtonPress(1)){
				RED_INC=0;
				status=TUNING_GREEN1;
				setTimer1(10);
			}
			break;

		case TUNING_GREEN1:

			setLEDGREEN1();
			clearLED2();

			if(isButtonPress(2)){
				GREEN_INC++;
				display7SEG_a(GREEN_INC / 10);
				display7SEG_b(GREEN_INC % 10);
			}

			if (isButtonLongPress(2)){
				if (timer1_flag == 1){
					GREEN_INC--;
					display7SEG_a(GREEN_INC / 10);
					display7SEG_b(GREEN_INC % 10);
					setTimer1(200);
				}
			}

			if(isButtonPress(3)){
				green_time_1+=GREEN_INC;
			}
			if(isButtonPress(1)){
				GREEN_INC=0;
				status=TUNING_YELLOW1;
				setTimer1(10);
			}
			break;

		case TUNING_YELLOW1:
			setLEDYELLOW1();
			clearLED2();

			if(isButtonPress(2)){
				YELLOW_INC++;
				display7SEG_a(YELLOW_INC / 10);
				display7SEG_b(YELLOW_INC % 10);
			}

			if (isButtonLongPress(2)){
				if (timer1_flag == 1){
					YELLOW_INC--;
					display7SEG_a(YELLOW_INC / 10);
					display7SEG_b(YELLOW_INC % 10);
					setTimer1(200);
				}
			}

			if(isButtonPress(3)){
				yellow_time_1+=YELLOW_INC;

			}
			if(isButtonPress(1)){
				YELLOW_INC=0;
				red_time_2=yellow_time_1+green_time_1;
				status=TUNING_GREEN2;
				setTimer1(10);
			}
			break;

		case TUNING_GREEN2:
			setLEDGREEN2();
			clearLED1();

			if(isButtonPress(2)){
				GREEN_INC++;
				display7SEG_a(GREEN_INC / 10);
				display7SEG_b(GREEN_INC % 10);
			}

			if (isButtonLongPress(2)){
				if (timer1_flag == 1){
					GREEN_INC--;
					display7SEG_a(GREEN_INC / 10);
					display7SEG_b(GREEN_INC % 10);
					setTimer1(200);
				}
			}

			if(isButtonPress(3)){
				green_time_2+=GREEN_INC;
			}
			if(isButtonPress(1)){
				GREEN_INC=0;
				yellow_time_2=red_time_1-green_time_2;
				status=RED1_GREEN2;
				setTimer1(green_time_2 * 1000);
			}
			break;

		default:
			break;

	}
}
