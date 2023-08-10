/*
 * LIFO.h
 *
 *  Created on: 3 Aug 2023
 *      Author: Adham
 */
#ifndef LIFO_H
#define LIFO_H


//type definitions
typedef struct{

	unsigned int length;
	unsigned int* base;
	unsigned int* head;
	unsigned int count;
}LIFO_Buf_t;

typedef enum{

	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_NUll
}LIFO_status;

//APIs

LIFO_status LIFO_Add_item(LIFO_Buf_t* lifo_buf,unsigned int item);
LIFO_status LIFO_get_item(LIFO_Buf_t* lifo_buf,unsigned int* item);
LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf,unsigned int* buf,unsigned int length);
#endif

