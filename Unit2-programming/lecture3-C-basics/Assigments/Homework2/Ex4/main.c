#include  <stdio.h>
float x;

int main(void)
{

   printf("please enter a number: ");
   fflush(stdin);fflush(stdout);
   scanf("%f",&x);
   printf("%.2f is %s",x,(x>0)?"positive":"negative");
    return 0;
}


