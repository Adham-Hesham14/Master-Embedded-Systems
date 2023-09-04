/*
 * DC.c
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */

#include"DC.h"
//variables
int DC_speed=0;
//global pointer to function
void(*DC_state)();
//prototypes

//definitions
void DC_motor_set_speed(int s){

	DC_speed=s;
	DC_state=state(DC_busy);

}
state_define(DC_init){

	//init DC_driver
	printf("DC_init\n");

}
state_define(DC_idle){

	//state name
	DC_state_id=DC_idle;
	//action
	printf("DC_idle: speed=%d\n",DC_speed);
}
state_define(DC_busy){

	//state name
	DC_state_id=DC_busy;
	//state action
		//make PWM speed=CA_speed
	printf("DC_busy: speed=%d\n",DC_speed);
	DC_state=state(DC_idle);
}
