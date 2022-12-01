#include  <stdio.h>
int x,fact=1,i;

int main(void)
{
	s:
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x<0){
		printf("Error!!! factorial of negative number doesn't exist\n");
		goto s;
	}

	for(i=1;i<=x;i++){
		fact*=i;
	}

	printf("factorial = %d",fact);



	return 0;}


