/*
 * FIFO.c
 *
 *  Created on: 4 Aug 2023
 *      Author: Adham
 */

#include"FIFO.h"
#include <stddef.h>
//APIs
FIFO_Buf_status FIFO_init(FIFO_Buf_t* fifo, element_type* buffer, uint32_t length){

	// check if buffer array is null
	if(buffer==NULL)
		return FIFO_null;

	//initialize fifo
	fifo->base=buffer;
	fifo->head=buffer;
	fifo->tail=buffer;
	fifo->count=0;
	fifo->length=length;
	return FIFO_no_error;
}
FIFO_Buf_status	FIFO_enqueue(FIFO_Buf_t* fifo, element_type item){

	// check if fifo is null
	if(!(fifo->base)|| !(fifo->head)|| !(fifo->tail))
		return FIFO_null;

	// check if fifo is full
	if(FIFO_IS_FULL(fifo)==FIFO_full)
		return FIFO_full;
	*(fifo->head)=item;
	fifo->count++;

	//circular fifo
	if((fifo->head)==(fifo->base +(fifo->length)*sizeof(element_type)))
		fifo->head=fifo->base;
	else
		fifo->head++;

	return FIFO_no_error;
}

FIFO_Buf_status FIFO_dequeue(FIFO_Buf_t* fifo, element_type* item){

	// check if fifo is null
		if(!(fifo->base)|| !(fifo->head)|| !(fifo->tail))
			return FIFO_null;

	// check if fifo is empty
		if(fifo->count==0)
			return FIFO_empty;

		*(item)=*(fifo->tail);
		fifo->count--;

		//circular fifo
			if((fifo->tail)==(fifo->base +(fifo->length)*sizeof(element_type)))
				fifo->tail=fifo->base;
			else
				fifo->tail++;

			return FIFO_no_error;
}
FIFO_Buf_status FIFO_IS_FULL(FIFO_Buf_t* fifo){

	// check if fifo is null
	if(!(fifo->base)|| !(fifo->head)|| !(fifo->tail))
		return FIFO_null;
	if(fifo->count ==fifo->length)
		return FIFO_full;
	return FIFO_no_error;
}
void FIFO_print(FIFO_Buf_t* fifo){

	element_type* temp;
	int j;

// check if fifo is empty
	if(fifo->count==0)
		printf("fifo is empty\n");

	else{

		temp=fifo->tail;
		printf("\n=======fifo_print=======\n");

		for(j=0;j<fifo->count;j++){

			printf("\t%x\n",*temp);
			temp++;
		}
		printf("\n===================\n");

	}

}
