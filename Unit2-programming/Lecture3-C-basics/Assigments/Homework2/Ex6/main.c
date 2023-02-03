#include  <stdio.h>
int x,sum,i;

int main(void)
{
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+=i;
	}

	printf("Sum=%d",sum);



	return 0;}


