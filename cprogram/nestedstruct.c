#include<stdio.h>
#include<string.h>

//method 1

struct dob
{
    int dd;
    int mm;
    int yyyy;
};

struct student
{
    char name[30];
    int roll;
    struct dob dob;
};

int main()
{
    struct student stu;
    
    scanf("%s",stu.name);
    scanf("%d",&stu.roll);
    scanf("%d",&stu.dob.dd);
   scanf("%d",&stu.dob.mm);
    scanf("%d",&stu.dob.yyyy);

     printf("%s\n",stu.name);
    printf("%d\n",stu.roll);
    printf("%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

return 0;   
}


//method 2

// struct student
// {
//     char name[30];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     }dob;

//     //struct dob dob;
// };

// int main()
// {
//     struct student stu;
    
//     scanf("%s",stu.name);
//     scanf("%d",&stu.roll);
//     scanf("%d",&stu.dob.dd);
//    scanf("%d",&stu.dob.mm);
//     scanf("%d",&stu.dob.yyyy);

//      printf("%s\n",stu.name);
//     printf("%d\n",stu.roll);
//     printf("%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

// return 0;   
// }


//array of nested struct


// struct student
// {
//     char name[30];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     }dob;

//     //struct dob dob;
// };

// int main()
// {
//     struct student stu[2];
    
//     for(int i=0; i<2; i++)
//     {
            
//         scanf("%s",stu[i].name);
//         scanf("%d",&stu[i].roll);
//         scanf("%d",&stu[i].dob.dd);
//         scanf("%d",&stu[i].dob.mm);
//         scanf("%d",&stu[i].dob.yyyy);

//     }
    
//     for(int i=0; i<2; i++)
//     {
            
//         printf("%s\n",stu[i].name);
//         printf("%d\n",stu[i].roll);
//         printf("%d-%d-%d\n",stu[i].dob.dd,stu[i].dob.mm,stu[i].dob.yyyy);
       
//     }
    
// return 0;   
// }


//accesing nested strut mem

//method 1 using . operator


// struct student
// {
//     char name[30];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     }dob;

//     //struct dob dob;
// };

// int main()
// {
//     struct student stu[2];
    
//     for(int i=0; i<2; i++)
//     {
            
//         scanf("%s",stu[i].name);
//         scanf("%d",&stu[i].roll);
//         scanf("%d",&stu[i].dob.dd);
//         scanf("%d",&stu[i].dob.mm);
//         scanf("%d",&stu[i].dob.yyyy);

//     }
    
//     for(int i=0; i<2; i++)
//     {
            
//         printf("%s\n",stu[i].name);
//         printf("%d\n",stu[i].roll);
//         printf("%d-%d-%d\n",stu[i].dob.dd,stu[i].dob.mm,stu[i].dob.yyyy);
       
//     }
    
// return 0;   
// }


//method 2 - using -> operator



// struct student
// {
//     char name[30];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     }dob;

//     //struct dob dob;
// };

// int main()
// {
//     // struct dob dob={12,23,2022};
//     // struct student stu = {"ram", 12,dob};

// //method 2
//  struct student stu = {"ram", 12,{12,12,2022}};

//     struct student *ptr = &stu;
            
//         printf("%s\n",ptr->name);
//         printf("%d\n",ptr->roll);
//         printf("%d-%d-%d\n",ptr->dob.dd,ptr->dob.mm,ptr->dob.yyyy);  
// return 0;   
// }