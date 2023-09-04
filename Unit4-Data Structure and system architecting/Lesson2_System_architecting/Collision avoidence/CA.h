/*
 * CA.h
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */

#ifndef CA_H_
#define CA_H_
#include"state.h"

enum {

	CA_waiting,
	CA_driving

}CA_state_id;

state_define(CA_waiting);
state_define(CA_driving);

extern void(*CA_state)();
#endif /* CA_H_ */
