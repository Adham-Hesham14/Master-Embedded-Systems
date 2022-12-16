#include  <stdio.h>
float a[100],sum;
int x,i;
int main(void)
{
printf("please enter the the number of elements: ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
while(x<=0 || x>100){
	printf("Error! number should be in range of(1 to 100)");
	printf("please enter the the number again");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
}
for(i=0;i<x;i++){
	printf("%d-Enter number: ",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&a[i]);
	sum+=a[i];
}
printf("The average of %d numbers is: %.2f",x,sum/x);

	return 0;}


