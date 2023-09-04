/*
 * main.c
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */


#include"CA.h"
#include"DC.h"
#include"US.h"

void setup(){

	state(US_init)();
	state(DC_init)();
	CA_state=state(CA_waiting);
	DC_state=state(DC_idle);
	US_state=state(US_busy);
}

void main(){

	volatile int d;
	setup();
	while(1){

		US_state();
		CA_state();
		DC_state();
		//delay
		for(d=0;d<=1000;d++);
	}


}
