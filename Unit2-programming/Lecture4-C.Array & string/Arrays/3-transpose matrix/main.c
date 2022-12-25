#include  <stdio.h>
float a[10][10];
int x,y,i,j;
int main(void)
{
	printf("please enter the number of rows and columns: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&x,&y);

	// inserting the values in the matrix
for(i=0;i<x;i++){
	printf("for row number number %d\n",i+1);
	for(j=0;j<y;j++){
		printf("enter the value element %d: ",i+1);
		fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
	}
}
// displaying the transpose of the matrix
printf("The transpose of  the matrix is: \n");
for(i=0;i<x;i++){
	for(j=0;j<y;j++){
		printf("%2.2f\t",a[j][i]);
	}printf("\n");
}
	return 0;}


