#include<stdio.h>
#include<string.h>

//gloabl 
// struct  student 
// {
//     char name[30];
//     int roll;
//     int age;

// }stu; //gloabl variable

// struct student stu1; //gloabl variable


// int main()
// {
//     struct student stu2; //local variable

// }

//local structure

 //gloabl variable

// int main()
// {

//     struct  student 
// {
//     char name[30];
//     int roll;
//     int age;

// }stu;
//     struct student stu2; //local variable
    
// }

//array of a structure

 struct  student 
{
    char name[30];
    int roll;
    int age;
    int marks[3];
} ; //stu[10];
int main()
{
    struct student stu[20];
   
    struct student *ptr = &stu;
    int n; //kitne student hain
    scanf("%d",&n);
for(int i=0; i<n; i++)
{
    printf("student %d\n",i+1);
     printf("name : ");
    scanf("%s",stu[i].name);
     printf("roll : ");
    scanf("%d",&stu[i].roll);
     printf("age : ");
    scanf("%d",&stu[i].age);
    for(int j=0; j<3; j++)
    { printf("marks : %d ",j+1);
      scanf("%d",&stu[i].marks[j]);
    }
}

for(int i=0;i<n; i++)
{
   printf(" name %s\n",stu[i].name);
    printf("roll %d\n",stu[i].roll);
    printf("age %d\n",stu[i].age);

    for(int j=0; j<3; j++)
    {
    printf(" marks%d %d\n",j+1,stu[i].marks[j]);
    }

}

   
    
}