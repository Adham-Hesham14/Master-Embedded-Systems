/*
 * FIFO.h
 *
 *  Created on: 4 Aug 2023
 *      Author: Adham
 */

#ifndef FIFO_H_
#define FIFO_H_

#include"stdio.h"
#include"stdint.h"

#define	element_type	uint8_t
#define	width1	5

element_type uart_buffer[width1];
//fifo_datatypes
typedef struct{

	unsigned int	length;
	unsigned int	count;
	element_type*	base;
	element_type*	head;
	element_type*	tail;

}FIFO_Buf_t;
//fifo_status
typedef	enum{

	FIFO_no_error,
	FIFO_full,
	FIFO_null,
	FIFO_empty
}FIFO_Buf_status;
//APIs

FIFO_Buf_status FIFO_init(FIFO_Buf_t* fifo, element_type* buffer, uint32_t length);
FIFO_Buf_status	FIFO_enqueue(FIFO_Buf_t* fifo, element_type item);
FIFO_Buf_status FIFO_dequeue(FIFO_Buf_t* fifo, element_type* item);
FIFO_Buf_status FIFO_IS_FULL(FIFO_Buf_t* fifo);
void FIFO_print(FIFO_Buf_t* fifo);
#endif /* FIFO_H_ */
