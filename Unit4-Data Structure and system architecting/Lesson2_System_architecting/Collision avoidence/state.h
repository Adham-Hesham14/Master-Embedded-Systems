/*
 * state.h
 *
 *  Created on: 29 Aug 2023
 *      Author: Adham
 */

#ifndef STATE_H_
#define STATE_H_

#define state_define(_STATE_FUN_)	void ST_##_STATE_FUN_()
#define	state(_STATE_FUN_)	ST_##_STATE_FUN_


#include"Stdio.h"
#include"stdlib.h"


//states connection
void US_read_distance(int d);
void DC_motor_set_speed(int s);

#endif /* STATE_H_ */
