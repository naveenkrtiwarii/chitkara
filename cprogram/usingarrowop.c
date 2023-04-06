// #include<stdio.h>
// #include<string.h>

//  struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }; 

// int main()
// {
//     struct student stu;

//     //pointer variable
//     struct student *ptr = &stu;

//     strcpy(ptr->name,"raj ravi");
//     ptr->roll=13;
//     ptr->marks[0]=98;
//     ptr->marks[1]=99;
//     ptr->marks[2]=97;

//     ptr->avg=(float)(ptr->marks[0]+ptr->marks[1]+ptr->marks[2])/3;

//     if((int)ptr->avg>=90)
//     {
//         ptr->grade='A';
//     }
//     else if((int)ptr->avg<90 && (int)ptr->avg>=70 )
//     {
//         ptr->grade='B';
//     }
//     else
//     {
//         ptr->grade='C';

//     }

//         printf("name : %s\n",ptr->name);
//         printf("roll  : %d \n",ptr->roll);
//         printf("grade : %c\n",ptr->grade);
//         printf("marks 1  : %d \n",ptr->marks[0]);
//         printf("marks 2  : %d \n",ptr->marks[1]);
//         printf("marks 3  : %d \n",ptr->marks[2]);
//         printf("avg  : %f \n",ptr->avg);
//  return 0;

// }


#include<stdio.h>
#include<string.h>

//  struct student
// {
//     char name[50];
//     int roll ;
//     char grade;
//     int marks[3];
//     float avg;
// }; 

int main()
{
     struct student
{
    char name[50];
    int roll ;
    char grade;
    int marks[3];
    float avg;
}; 

    struct student stu= {.grade='A',.name="ram",.marks[0]=98,.marks[2]=99,.marks[1]=89,.avg=78.554};
 struct student stu2= {.grade='B',.name="ram",.marks[0]=98,.marks[2]=99,.marks[1]=89,.avg=78.554};

    //pointer variable
    // struct student *ptr = &stu;

    // strcpy(ptr->name,"raj ravi");
    // ptr->roll=13;
    // ptr->marks[0]=98;
    // ptr->marks[1]=99;
    // ptr->marks[2]=97;

    // ptr->avg=(float)(ptr->marks[0]+ptr->marks[1]+ptr->marks[2])/3;

    // if((int)ptr->avg>=90)
    // {
    //     ptr->grade='A';
    // }
    // else if((int)ptr->avg<90 && (int)ptr->avg>=70 )
    // {
    //     ptr->grade='B';
    // }
    // else
    // {
    //     ptr->grade='C';

    // }

        printf("name : %s\n",stu2.name);
        printf("roll  : %d \n",stu.roll);
        printf("grade : %c\n",stu.grade);
        printf("marks 1  : %d \n",stu.marks[0]);
        printf("marks 2  : %d \n",stu.marks[1]);
        printf("marks 3  : %d \n",stu.marks[2]);
        printf("avg  : %f \n",stu.avg);
 return 0;





}