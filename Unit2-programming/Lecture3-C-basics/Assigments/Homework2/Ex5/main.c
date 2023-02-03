#include  <stdio.h>
char x;

int main(void)
{
while(1){
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if((x<=122 && x>= 97)||(x<=90 && x>= 65)) printf("%c is an alphabet\n",x);
	else printf("%c is not an alphabet\n",x);
}
		return 0;}


