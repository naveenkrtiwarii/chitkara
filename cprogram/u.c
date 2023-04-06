#include<stdio.h>
#include<string.h>
union student
{
    // int roll;
     char name[20];
    int a;
    int b;
    int c;
    char ch;

}stu;

int main()
{
//     stu.roll=13;
//     printf("%d \n",stu.roll);

//     strcpy(stu.name,"ram ravi"); 
//    printf("%s \n",stu.name);
   union student *ptr=&stu;
ptr->a=12;
stu.b=15;
stu.c=18;
stu.ch='Q';
 strcpy(stu.name,"ram ravi"); 

printf("%d\n",sizeof(stu));



   return 0;
}
