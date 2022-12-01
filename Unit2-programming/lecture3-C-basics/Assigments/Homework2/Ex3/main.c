#include  <stdio.h>
float a,b,c;

int main(void)
{

	printf("please enter the three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
		if(a>c) printf("largest number = %.2f",a);
		else printf("largest number =%.2f",c);

	}
	else {

			if(b>c) printf("largest number = %.2f",b);
			else printf("largest number =%.2f",c);
	}

		return 0;}


