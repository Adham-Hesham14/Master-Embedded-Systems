#include  <stdio.h>
int i,j,counter;
char a[100],b[100],y;
int main(void)
{

printf("Enter the string: ");
gets(a);
for(i=0;a[i]!=0;i++){
    counter++;
}
for(j=0;j<counter;j++){
    i--;
    b[j]=a[i];

}
b[j]=0;
printf("Reverse string: %s\n",b);
	return 0;}


