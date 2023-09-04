/*
 * CA.c
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */


#include"CA.h"

//variables
int CA_distance=0, CA_speed=0, CA_threshold=50;

//global pointer to function
void(*CA_state)();
//prototypes


//definitions
void US_read_distance(int d){

	CA_distance=d;
	CA_state=(CA_distance<=CA_threshold)? (state(CA_waiting)):(state(CA_driving));
	printf("US----distance=%d--->CA\n",CA_distance);
}

state_define(CA_waiting){

	//state name
	CA_state_id=CA_waiting;
	printf("CA_waiting--------distance=%d,speed=%d\n",CA_distance,CA_speed);
	//action
	CA_speed=0;
	printf("CA----speed=%d---->DC\n",CA_speed);
	DC_motor_set_speed(CA_speed);


}
state_define(CA_driving){

	//state name
	CA_state_id=CA_driving;
	printf("CA_driving--------distance=%d,speed=%d\n",CA_distance,CA_speed);
	//action
	CA_speed=30;
	printf("CA----speed=%d---->DC\n",CA_speed);
	DC_motor_set_speed(CA_speed);
}
