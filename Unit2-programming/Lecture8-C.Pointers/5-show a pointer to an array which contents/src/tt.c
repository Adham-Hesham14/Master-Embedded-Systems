#include<stdio.h>

struct Semp{
	char name[10];
	int id;
};

void fun(struct Semp* px){

        printf("Employee name: %s\nEmployee ID: %d\n",px->name,px->id);

}

int main(){


	struct Semp employee[]={{"Alex", 1002}, {"Adham",1005}};

	fun(&employee);

	return 0;
}
