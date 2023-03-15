#include<stdio.h>
#include<string.h>
struct Sstudent{

    char name[20];
    int roll;
    float mark;


};
struct Sstudent readdata(struct Sstudent student,int i)
{

printf("student %d\n-------\n",i+1);
    printf("Enter the name: ");
    scanf("%s",student.name);
    printf("Enter roll number: ");
    scanf("%d",&student.roll);
    printf("Enter mark: ");
    scanf("%f",&student.mark);

    return student;
}

struct Sstudent displaydata(struct Sstudent student, int i);

void main()
{
    struct Sstudent student[10];
    int i;

    for(i=0;i<10;i++)
    {

     student[i]=readdata(student[i],i);


    }
    printf("\n\nDisplaying Information\n-----------------\n\n");

    for(i=0;i<10;i++)
    {
        displaydata(student[i],i);
    }
}

struct Sstudent displaydata(struct Sstudent student,int i)
{
    printf("student %d\n--------\n",i+1);
    printf("name: %s\nRoll: %d\nMark: %.2f\n",student.name,
                                           student.roll,
                                           student.mark);
}
