/*
 * LIFO.c
 *
 *  Created on: 3 Aug 2023
 *      Author: Adham
 */
#include"LIFO.h"
#include <stddef.h>

//APIs

LIFO_status LIFO_Add_item(LIFO_Buf_t* lifo_buf,unsigned int item){

	//check lifo is valid
	if(!(lifo_buf->base || lifo_buf->head))
		return LIFO_NUll;
	//check lifo is full
	if(lifo_buf->count==lifo_buf->length)
		return LIFO_full;

	//add value
	*(lifo_buf->head++)=item;
	  lifo_buf->count++;
	  return LIFO_no_error;
}
LIFO_status LIFO_get_item(LIFO_Buf_t* lifo_buf,unsigned int* item){

	//check lifo is valid
	if(!(lifo_buf->base)|| !(lifo_buf->head))
		return LIFO_NUll;
	//check lifo is empty
	if(lifo_buf->count==0)
		return LIFO_empty;
	lifo_buf->head--;
	*(item)=*(lifo_buf->head);
	lifo_buf->count--;
	return LIFO_no_error;

}
LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf,unsigned  int* buffer, unsigned int length){

	if(buffer == NULL)
		return LIFO_NUll;

	lifo_buf->base=buffer;
	lifo_buf->head=buffer;
	lifo_buf->length=length;
	return LIFO_no_error;



}


