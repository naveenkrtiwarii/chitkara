#include<stdio.h>
#include<string.h>

// void show(char* , int, char);

// struct student
// {
//     char name[20];
//     int roll;
//     char grade;
// }stu;

// int main()
// {
//     strcpy(stu.name,"ram naam");
//     stu.roll=12;
//     stu.grade='A';

//     show(stu.name,stu.roll, stu.grade);
//     return 0;
// }

// void show(char *name, int roll, char grade)
// {
//     printf("%s %c %d \n",name,grade,roll);
// }





// void show(char *name, int roll, char grade)
// {
//     printf("%s %c %d \n",name,grade,roll);
// }


// struct student
// {
//     char name[20];
//     int roll;
//     char grade;
// }stu;

// int main()
// {
//     strcpy(stu.name,"ram naam");
//     stu.roll=12;
//     stu.grade='A';

//     show(stu.name,stu.roll, stu.grade);
//     return 0;
// }



// struct student
// {
//     char name[20];
//     int roll;
//     char grade;
// };

// void show(struct student stu[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//      printf("%s %c %d \n",stu[i].name,stu[i].grade,stu[i].roll);
//     }
// };

// //stu[100];

// int main()
// {
//     struct student stu[100];
//     int n;
//     printf("kitne student the : ");
//     scanf("%d",&n);

//     for(int i=0; i<n;i++)
//     {
//      scanf("%s",stu[i].name);
//      scanf("%d",&stu[i].roll);
//      scanf(" %c",&stu[i].grade);

//     }
     
//      show(stu,n);
//     return 0;
// }


struct student
{
    char a;
    char b[4];
    int roll;
    
};


int main()
{
    struct student stu;
    printf(" size of struct var = : %d",sizeof(stu));
    
}





