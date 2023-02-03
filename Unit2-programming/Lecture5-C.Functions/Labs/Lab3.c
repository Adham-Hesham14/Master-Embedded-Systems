#include"stdio.h"

int findname(char names[][14],int n,char name[]);
void main(){
char name[14];
char names[5][14]={"Alaa", "Osama", "Mamdouh", "Samy", "Hossain"};
printf("Enter your name:");
gets(name);
if((findname(names,5,name))==1)
    puts("Welcome");
else
   printf("Goodbye");
}

int findname(char names[][14],int n,char name[]){
int res,i;
for(i=0;i<n;i++){

    if(strcmp(name,names[i])==0){
        res=1;
        break;
    } // end of IF
}  // end of for loop

if(i==n) res=0;
return res;
} // end of findname function
