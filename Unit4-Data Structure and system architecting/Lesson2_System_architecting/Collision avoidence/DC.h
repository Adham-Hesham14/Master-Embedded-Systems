/*
 * DC.h
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */

#ifndef DC_H_
#define DC_H_
#include"state.h"

enum{

	DC_idle,
	DC_busy

}DC_state_id;

state_define(DC_init);
state_define(DC_idle);
state_define(DC_busy);

extern void(*DC_state)();

#endif /* DC_H_ */
