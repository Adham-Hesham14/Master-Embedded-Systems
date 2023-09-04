/*
 * US.c
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */
#include"US.h"
//variables
int US_distance=0;

//global pointer to function

void(*US_state)();

//prototypes
int generate_random(int l, int r, int count);

//definitions
state_define(US_init){

	//init US_driver
	printf("US_init\n");

}
state_define(US_busy){

	//state name
	US_state_id=US_busy;
	//state action
	US_distance=generate_random(45,55,1);
	US_read_distance(US_distance);
	US_state=state(US_busy);

}



int generate_random(int l, int r, int count){

	int i;
	for(i=0;i<count;i++){

		int rand_num=(rand()%(r-l+1))+l;
		return rand_num;
	}

}
