#include<stdio.h>
//#include<string.h>

//union - 
//a user-defined data type which is a collection of different variables of different data types in the same memory location.
//The union can also be defined as many members, 
//only one member can contain a value at any given time.
//it provides an efficient way of using the same memory location for multiple-purpose.
//union keyword is used for defining the union data type
//the union members share the same memory location.

//union  Declaration

//method 1   without using union variables 

// union student
// {
//     int roll;
//     char grade;
//     float avg;
// };

//method 2 with  using union variables

// union student
// {
//     int roll;
//     char grade;
//     float avg;
// }stu1, stu2;

//method 3

// union student
// {
//     int roll;
//     char grade;
//     float avg;
// };
// union student stu1,stu2;

//accessing Union Members
//1. using . operator  2. using -> operator

//method 1 - using . operator

// union student
// {
//     char name[30];
//     int roll;
//     //char grade;
//     float avg;
// };

// int main()
// {
//       union student stu;
   
//       {
//         /* data */
//       };
      
//       printf("size of union : %d \n",sizeof(stu));

    //in this case we will get wrong values 
    //beacuse union can hold one value ata time 
  

//     stu.roll=12;
//     stu.grade='A';
//     stu.avg=78.32;

//     printf("roll %d\n",stu.roll);
//     printf("roll %c\n",stu.grade);
//     printf("roll %f\n",stu.avg);
     
//  return 0;
//}

//now will get correct output
 
// union student
// {
//     int roll;
//     char grade;
//     float avg;
// };

// int main()
// {
//     union student stu;

//     stu.roll=12;
//     printf("roll %d\n",stu.roll);
//     stu.grade='A';

//     printf("roll %c\n",stu.grade);
   
//     stu.avg=78.32;
//      printf("roll %f\n",stu.avg);
     
// return 0;
// }     

//using -> oprator

// union student
// {
//     int roll;
//     char grade;
//     float avg;
// };

// int main()
// {
//     union student stu;

//     union student *ptr = &stu;
   
//     ptr->roll=12;
//     printf("roll %d\n",ptr->roll);
//     stu.grade='A';

//     printf("roll %c\n",ptr->grade);
   
//     stu.avg=78.32;
//      printf("roll %f\n",ptr->avg);
     
// return 0;
// }  

//initializing union members


// union student
// {
//     int roll;
//     char grade;
//     float avg;
//     double val;
// }stu;

// int main()
// {
//       stu.roll=12;
//     stu.grade='A';
//      stu.avg=78.32;
//     //printf("roll %d\n",stu.roll);
//     //printf("roll %c\n",stu.grade);   
//      printf("roll %f\n",stu.avg);
     
// return 0;
// }     


//size of a union varibale 

//eg 1
// union student
// {
//     int roll;
//     char grade;
//     float avg;
// };

// int main()
// {
//     union student stu;

//     printf("size of union varible %d\n",sizeof(stu));
 
// return 0;
// }     


//eg 2

// union student
// {
//     int roll;
//     char grade;
//     float avg;
//     double val;
// };

// int main()
// {
//     union student stu;

//     printf("size of union varible %d\n",sizeof(stu));
 
// return 0;
// }     


//eg 3

// union student
// {
//     int roll;
//     char grade;
//     float avg;
//     int arr[5];
// };

// int main()
// {
//     union student stu;

//     printf("size of union varible %d\n",sizeof(stu));
 
// return 0;
// }     


//eg 4

// union student
// {
//     int roll;
//     char grade;
//     float avg;
//     char ch[20];
// };

// int main()
// {
//     union student stu;

//     printf("size of union varible %d\n",sizeof(stu));
 
// return 0;
// }     


// union student
// {
//     int roll;
//     char grade;
//     float avg;
//     double val;
// };

// int main()
// {
//       stu.roll=12;
//       stu.grade='A';
//      stu.avg=78.32;   
//      printf("%.2f\n",stu.avg);
     
// return 0;
// }     



