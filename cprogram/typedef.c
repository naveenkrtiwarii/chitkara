#include<stdio.h>

//typedef - 
//typedef is a keyword.
//It provides existing data types with a new name.
// it is used to redefine the name already the existing name.
//typedef can be used with user-defined datatypes, 
//which behave similarly to defining an alias for commands.

//use - . When names of datatypes become difficult to use in programs, typedef is used with user-defined datatypes.


//syntax - typedef existing_name alias_name

//declration 

//using typedef with primary data types

// typedef float f;
// typedef long int missyou;

// int main()
// {
//     f a=12.3;
//     printf("val = %f",a);

//     missyou ab=12;
//      printf("val = %d",ab);
//     return 0;
// }


//Using typedef with structures

//method 1

// typedef struct student
// {
//   char name[39];
//   int roll;
//   char grade;
// }stu;

// int main()
// {
//   stu st;

//   st.roll=12;
//   st.grade='A';

//    printf(" %d  %c \n",st.roll,st.grade);
 
//    return 0;
// }


//method 2

struct student
{
  char name[39];
  int roll;
  char grade;
};

typedef struct student student;

int main()
{
  student st;

  st.roll=12;
  st.grade='A';

   printf(" %d  %c \n",st.roll,st.grade);
 
   return 0;
}


//typedef with array

typedef int arr[10];

int main()
{
    arr temp = {2,3,4,5,67,12,4,76,45,23};

    for(int i=0; i<10; i++)
    {
        printf("%d ",temp[i]);
    }
}


//Using typedef with pointers

// typedef int* ptr;

// int main()
// {
//       ptr val;

//     int a=12;
//     val = &a;
    
//     printf("%d\n",*val);

// }

