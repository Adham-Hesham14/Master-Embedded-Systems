#include  <stdio.h>
float a[100];
int n,y,i; float x;
int main(void)
{
printf("please enter the number of elements: ");
scanf("%d",&n);

for(i=0;i<n;i++){
        a[i]=i+1;
	printf("%2.2f\t",a[i]);
}


printf("\nplease enter the element to be inserted: ");
scanf("%f",&x);

printf("please enter the location: ");
scanf("%d",&y);
y--; // because array index starts from 0

for(i=n-1;i>=y;i--){
    a[i+1]=a[i];
}
a[y]=x;
printf("The array will be:\n");
for(i=0;i<=n;i++){
	printf("%2.2f\t",a[i]);
}
	return 0;}


