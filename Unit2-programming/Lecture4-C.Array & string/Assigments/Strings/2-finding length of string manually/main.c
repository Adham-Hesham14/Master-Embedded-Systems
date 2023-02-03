#include  <stdio.h>
int i,counter;
char a[100],y;
int main(void)
{

printf("Enter a string: ");
gets(a);
for(;a[i]!=0;i++){
    counter++;
}
printf("Length of the string: %d\n",counter);
	return 0;}


