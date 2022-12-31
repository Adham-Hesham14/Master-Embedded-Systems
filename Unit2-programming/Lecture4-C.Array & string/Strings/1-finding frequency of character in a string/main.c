#include  <stdio.h>
int i,counter;
char a[100],y;
int main(void)
{

printf("Enter a string: ");
gets(a);
printf("Enter a character to find a frequency: ");
scanf("%c",&y);
while(a[i]!=0){
    if(a[i]==y) counter++;
    i++;
}
printf("Frequency of %c is %d",y,counter);
	return 0;}


