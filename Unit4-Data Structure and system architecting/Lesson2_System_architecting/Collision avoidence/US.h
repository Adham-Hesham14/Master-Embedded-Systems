/*
 * US.h
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */

#ifndef US_H_
#define US_H_
#include"state.h"

enum {

	US_busy
}US_state_id;

state_define(US_init);
state_define(US_busy);

extern void(*US_state)();


#endif /* US_H_ */
