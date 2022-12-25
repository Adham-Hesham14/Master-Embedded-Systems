#include  <stdio.h>
float x[2][2],y[2][2];
int i,j;
int main(void)
{
	printf("please enter the elements of the 1st matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("please enter the element[%d][%d]: ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&x[i][j]);

		}
	}
	printf("please enter the elements of the 2nd matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("please enter the element[%d][%d]: ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&y[i][j]);

		}
	}
	printf("sum of matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%.2f  ",x[i][j]+y[i][j]);

		}printf("\n");
	}
	return 0;}


