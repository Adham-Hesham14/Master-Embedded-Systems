/*	main.c
*
*	CopyRight : Adham Hesham	
*/

#include"stdint.h"

#define SYSCTL_base	0x400FE000
#define GPIO_PORTF_base	0x40025000
#define	SYSCTL_RCGC2_R	*((volatile unsigned long* )(SYSCTL_base+ 0x108))
#define	GPIO_PORTF_DATA_R	*((volatile unsigned long* )(GPIO_PORTF_base+0x3FC))
#define	GPIO_PORTF_DIR_R	*((volatile unsigned long* )(GPIO_PORTF_base+ 0x400))
#define	GPIO_PORTF_DEN_R	*((volatile unsigned long* )(GPIO_PORTF_base+ 0x51C))

int main(void){
	
	volatile unsigned long delay_count;
	SYSCTL_RCGC2_R=0x00000020;
	for(delay_count=0;delay_count<200;delay_count++);
	GPIO_PORTF_DIR_R |=1<<3;
	GPIO_PORTF_DEN_R |=1<<3;
	 
	while(1){
		GPIO_PORTF_DATA_R |=1<<3;
		for(delay_count=0;delay_count<2000;delay_count++);
			GPIO_PORTF_DATA_R &=~(1<<3);
		for(delay_count=0;delay_count<2000;delay_count++);
		
	}
	
	
	
	
	
		
}
