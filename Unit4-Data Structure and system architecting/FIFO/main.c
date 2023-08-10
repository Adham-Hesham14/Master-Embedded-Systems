/*
 * main.c
 *
 *  Created on: 4 Aug 2023
 *      Author: Adham
 */


#include"FIFO.h"

void main(){

	element_type i,temp=0;
	FIFO_Buf_t* uart_fifo;
//fifo init

	if(FIFO_init(uart_fifo, uart_buffer, width1)== FIFO_no_error)
		printf("FIFO init--------------done\n");

//enqueue

	for(i=0;i<7;i++){

		printf("FIFO enqueue(%x)\n",i);
		if(FIFO_enqueue(uart_fifo, i)==FIFO_no_error)
			printf("\tFIFO enqueue--------------done\n");
		else
			printf("\tFIFO enqueue--------------failed\n");
	}

	FIFO_print(uart_fifo);


//dequeue

	if(FIFO_dequeue(uart_fifo, &temp) == FIFO_no_error)

		printf("\tFIFO dequeue %x-----------done\n",temp);

	if(FIFO_dequeue(uart_fifo, &temp) == FIFO_no_error)

		printf("\tFIFO dequeue %x-----------done\n",temp);

	FIFO_print(uart_fifo);

}
