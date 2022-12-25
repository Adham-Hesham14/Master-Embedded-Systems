#include  <stdio.h>
int x,i,y,a[20];
int main(void)
{
    printf("pleas enter the number of elements: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        a[i]=(i+1)*11;
        printf("%2d\t",a[i]);
    }
printf("\nplease enter the element you look for: ");
scanf("%d",&y);
 for(i=0;i<x;i++){
    if(a[i]==y) {printf("Number found at the location= %d",i+1);
    break;}
    if(i==x-1){printf("the number you entered doesn't exist");
    break;}
 }

	return 0;}


