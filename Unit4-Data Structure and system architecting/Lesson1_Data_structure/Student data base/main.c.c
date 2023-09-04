#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"
#include <stddef.h>



struct Sdata{
	int ID;
	char Name[40];
	float Height;
};

struct Sstudent{

	struct Sdata student;
	struct Sstudent* Pnext_student;
};

struct Sstudent* gpfirst=NULL;
char temp[40];

//APIs
void  Add_student();
void  fill_record(struct Sstudent* Pnew_student);
int   Delete_student();
void  View_students();
void  Delete_all();
int   Get_Nth();
int   Get_Nth_from_end();
int   count_list(struct Sstudent* head);
int   Detect_loop();
int   View_middle();
int   Reverse_list();
void main(){
	while(1){
	printf("\n===============");
	printf("\n\tchoose one of the following option");
	printf("\n\t==================================");
	printf("\n1:  Add_student");
    printf("\n2:  Delete_student");
    printf("\n3:  view_students");
    printf("\n4:  Delete_all");
    printf("\n5:  Display data of Nth student");
    printf("\n6:  display data of Nth student from the end");
    printf("\n7:  view the length of the database");
    printf("\n8:  check if the database is infinite");
    printf("\n9:  View the middle of the data base");
    printf("\n10: Reverse the data base");
	printf("\nEnter option number: ");
	gets(temp);

	switch(atoi(temp)){

	case 1:     Add_student();break;
	case 2:     Delete_student();break;
	case 3:     View_students();break;
	case 4:     Delete_all();break;
    case 5:     Get_Nth();break;
    case 6:     Get_Nth_from_end();break;
    case 7:     printf("The list consists of %d elements",count_list(gpfirst));break;
    case 8:     Detect_loop();break;
    case 9:     View_middle();break;
    case 10:    Reverse_list();break;
    default: printf("Not valid\n");



	}
	printf("\n\t===================");
	}

}

void  Add_student(){


	struct Sstudent* Pnew_student, *Plast_student;
	if(gpfirst==NULL)// means list is empty
	{

		//create the first record
		Pnew_student=(struct Sstudent*)malloc(sizeof(struct Sstudent));
		gpfirst=Pnew_student;


	}
	else //means list is not empty
	{
        Plast_student=gpfirst;
		//navigate till reach to the last student
		while(Plast_student->Pnext_student)

			Plast_student=Plast_student->Pnext_student;

		//create new record
		Pnew_student=(struct Sstudent*)malloc(sizeof(struct Sstudent));
		Plast_student->Pnext_student=Pnew_student;

	}

	//fill the record
	fill_record(Pnew_student);
	Pnew_student->Pnext_student=NULL;

}
void  fill_record(struct Sstudent* Pnew_student){

	printf("Enter the ID: ");
	gets(temp);
	Pnew_student->student.ID=atoi(temp);
	printf("Enter the Name: ");
	gets(Pnew_student->student.Name);

	printf("Enter the Height: ");
	gets(temp);
	Pnew_student->student.Height=atof(temp);


}
int  Delete_student(){

	struct Sstudent* Pprev=NULL, *Psel=gpfirst;
	printf("Enter the ID: ");
		gets(temp);
		int selected_ID=atoi(temp);
	if(gpfirst){

		while(Psel){
			if(Psel->student.ID){

				//check if the slected student is the first one in the list or not
				if(Pprev){

					Pprev->Pnext_student=Psel->Pnext_student;
					free(Psel);

				}

				else{

					//if yes, make the Pprev points to the next record
					gpfirst=Psel->Pnext_student;
					free(Psel);
				}


				return 1;
			}

			//navigate till reach to the selected student
			Pprev=Psel;
			Psel=Psel->Pnext_student;
		}


	}

	printf("Student doesn't exist");
	return 0;




}
void  View_students(){

	struct Sstudent* Pcurrent_student=gpfirst;
	int count=0;
	if(gpfirst==NULL)
		printf("\nThe list is Empty");

	while(Pcurrent_student){

		printf("\nRecord number %d",1+count++);
		printf("\nID: %d",Pcurrent_student->student.ID);
		printf("\nName: %s",Pcurrent_student->student.Name);
		printf("\nHeight: %.2f",Pcurrent_student->student.Height);
		Pcurrent_student=Pcurrent_student->Pnext_student;


	}


}
void  Delete_all(){

	struct Sstudent* Pcurrent_student, *Ptemp;
	if(gpfirst){

		while(Pcurrent_student){

			Ptemp=Pcurrent_student;
			Pcurrent_student=Pcurrent_student->Pnext_student;
			free(Ptemp);
		}

		gpfirst=NULL;

	}



}
int Get_Nth(){

    printf("Enter the index: ");
    gets(temp);
    int index =atoi(temp),i;
    struct Sstudent* Pcurrent_student=gpfirst;
    if(gpfirst==NULL){
        printf("===The list is empty===\n");
        return 0;
    }
    while(Pcurrent_student){

        if(i==index){
            printf("\nRecord of index %d",i);
            printf("\nID: %d",Pcurrent_student->student.ID);
            printf("\nName: %s",Pcurrent_student->student.Name);
            printf("\nHeight: %.2f",Pcurrent_student->student.Height);

           return 1;
        }
        Pcurrent_student=Pcurrent_student->Pnext_student;
        i++;

    }
    printf("===This index not exists===\n");
    return 0;


}

int  count_list(struct Sstudent* head){


    if(head==NULL){


         return 0;
    }

    else
        return 1+(count_list(head->Pnext_student));



}
int Get_Nth_from_end(){

    printf("Enter the index: ");
    gets(temp);
    int index =atoi(temp),i=0;

        if(gpfirst==NULL){
        printf("===The list is empty===\n");
        return 0;
    }
    struct Sstudent* Pref=gpfirst, *Pmain=gpfirst;

    while(Pref->Pnext_student)//means it will loop untill the reference pointer reach to the last element
        {

        if(i!=index){
            // the reference pointer will move till the difference between it and the main pointer becomes = index
            Pref=Pref->Pnext_student;

        }
        else{
            // each of reference pointer and the main pointer will move one step every illetration keeping the difference between them constant
            if(index!=0)
            Pmain=Pmain->Pnext_student;
            Pref=Pref->Pnext_student;

        }
        i++;

    }
    //getting out of the loop means that reference pointer now points to the last element in the list
    printf("\nRecord of index %d",index);
    printf("\nID: %d",Pmain->student.ID);
    printf("\nName: %s",Pmain->student.Name);
    printf("\nHeight: %.2f",Pmain->student.Height);


    }

int Detect_loop(){

    struct Sstudent* Pfast=gpfirst, *Pslow=gpfirst;

    while(Pfast){

    	Pfast=Pfast->Pnext_student->Pnext_student;
    	Pslow=Pslow->Pnext_student;
    	if(Pfast== Pslow)
    		printf("The list is infinite");
    		return 1;
    }
    printf("The list is finite");
    return 0;

}

int   View_middle(){

    struct Sstudent* Pslow=gpfirst, *Pfast=gpfirst, *Pcondition;

        if(gpfirst==NULL)
        printf("===The list is empty===\n");
        int i=1;

    while(Pfast->Pnext_student){

        if(Pfast->Pnext_student->Pnext_student ==NULL){

            Pfast=Pfast->Pnext_student;
            Pslow=Pslow->Pnext_student;


        }
        else{
        Pfast=(Pfast->Pnext_student)->Pnext_student;
        Pslow=Pslow->Pnext_student;
        }
        i++;

    }

    printf("\nRecord %d",i);
    printf("\nID: %d",Pslow->student.ID);
    printf("\nName: %s",Pslow->student.Name);
    printf("\nHeight: %.2f",Pslow->student.Height);

}

int Reverse_list(){

    if(gpfirst==NULL)
        printf("===The list is empty===\n");

    struct Sstudent* Pcurrent=gpfirst, *Pprev=NULL, *Pnext=gpfirst->Pnext_student;

    while(Pcurrent){


            Pnext=Pcurrent->Pnext_student;
            Pcurrent->Pnext_student=Pprev;
            Pprev=Pcurrent;
            Pcurrent=Pnext;


        }

        gpfirst=Pprev;
        printf("=======Reversing is done=======");


    }




