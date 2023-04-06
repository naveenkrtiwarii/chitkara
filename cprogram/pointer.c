#include<stdio.h>

//pointer - 
//holds address of a varibale
//pointer is a derived data type in C 
//we can access and manipulate the data stored in that memory location using pointers


//syntax
//datatype *ptrname
//type int, char, array, function, or any other pointer


//size of ptr variable - 
//4 byte in 32-bit machine
//8 byte in 64 bit machine


//use of ptr
//used for dynamic memory allocation and deallocation.
//An Array or a structure can be accessed efficiently with pointers
//Pointers are useful for accessing memory locations.

//address operator - &
// & is a unary operator 
//it returns the address of its operand
// syntax - &varname


//Dereferencing Operator or  indirection operator - *
//*  is a unary operator
//prints the value of pointer variable
//used for Declaration of a pointer


//ptr initialization

// int main()
// {
//     //method 1
//     int val1=20;
//     int *ptr1=&val1;

//     //method 2
//     int val2=30;
//      int *ptr2;
//      ptr2=&val2;

// printf(" address of val1 %p \n",&val1);
// printf(" val1  %d \n",val1);
// printf(" ptr1 address %p \n",ptr1);
// printf(" ptr1 val %d \n",*ptr1);


// printf(" address of val2 %d \n",&val2);
// printf(" val2  %d \n",val2);
// printf(" ptr2 address %p \n",ptr2);
// printf(" ptr2 val %d \n",*ptr2);

// return 0;
// }


//size of ptr


// int main()
// {
//     int val1=20;
//     int *ptr1=&val1;

//     char ch='A';
//     char *ptr2=&ch;

//     float val2=3.12;
//     float *ptr3=&val2;

//     char str[]="raam";
//     char *ptr4=str;

//     printf("size of int ptr : %d \n",sizeof(ptr1));
//     printf("size of char ptr : %d \n",sizeof(ptr2));
//     printf("size of float ptr : %d \n",sizeof(ptr3));
//     printf("size of string ptr : %d ",sizeof(ptr4));

// return 0;
// }


//Pointer Arithmetic

//Increment/Decrement of a Pointer
//Addition of integer to a pointer
//Subtraction of integer to a pointer
//Subtracting two pointers of the same type
//Comparison of pointers of the same type.


// Increment (++ ) of a Pointer
//itincrements by the number equal to the size of the data type for which it is a pointer
//it moves to the next location/address 


// int main()
// {
//     int arr[]={2,3,54,564,4,323};

//     int *ptr=arr;

//     for(int i=0;i<6; i++)
//     {
//         printf("address arr[%d] : %p \n",i,ptr);
//         printf("val arr[%d] : %d \n\n",i,*ptr);
        
//         ptr++; //increment 
//     }  
// return 0;
// }


// int main()
// {
//     char arr[]={'o','A','B','C','Z','j'};

//     //int *ptr=arr;
//     char *ptr=arr;

//     for(int i=0;i<6; i++)
//     {
//         printf("address arr[%d] : %p \n",i,ptr);
//         printf("val arr[%d] : %c \n\n",i,*ptr);
        
//         ptr++; //increment 
//     }  
// return 0;
// }


//Decrement (--) of a Pointer
// it actually decrements by the number equal to the size of the data type for which it is a pointer. 
//moves to the previous location 


// int main()
// {
//     int arr[]={2,3,54,564,4,323};

//     int *ptr=&arr[5];

//     for(int i=5;i>=0; i--)
//     {
//         printf("address arr[%d] : %p \n",i,ptr);
//         printf("val arr[%d] : %d \n\n",i,*ptr);
        
//         ptr--; //Decrement 
//     }  
// return 0;
// }


// int main()
// {
//     char arr[]={'o','A','B','C','Z','j'};

//     //int *ptr=arr;
//     char *ptr=&arr[5];

//     for(int i=0;i<6; i++)
//     {
//         printf("address arr[%d] : %p \n",i,ptr);
//         printf("val arr[%d] : %c \n\n",i,*ptr);
        
//         --ptr; //Decrement 
//     }  
// return 0;
// }


//Addition
//When a pointer is added with a value, 
//the value is first multiplied by the size of data type and then added to the pointer.


// int main()
// {
//     int val=2;
//     // int val=2;
//     // int val=10;

//     int *ptr1=&val;
    
//     printf("before addition %d \n",ptr1);

//     //ptr1 = ptr1+0;
//     //ptr1 = ptr1+1;
//     //ptr1 = ptr1+2;
//     ptr1 = ptr1+3;

//  printf("after addition %d \n",ptr1);

//    // int *ptr2=&N


//

// return 0;
// }


//subtraction
//When a pointer is subtracted with a value, 
//the value is first multiplied by the size of the data type and then subtracted from the pointer.


// int main()
// {
//     int val=2;
//     // int val=2;
//     // int val=10;

//     int *ptr1=&val;
    
//     printf("before addition %p \n",ptr1);

//     //ptr1 = ptr1-0;
//     //ptr1 = ptr1-1;
//     //ptr1 = ptr1-2;
//     ptr1 = ptr1-3;

//  printf("after addition %p \n",ptr1);

//    // int *ptr2=&N

// return 0;
// }


//Subtraction of Two Pointers

//The subtraction of two pointers is possible only when they have the same data type.
//it gives the difference between the addresses of the two pointers and calculating how many bits of data it is according to the pointer data type. 
//subtraction of two pointers gives the increments between the two pointers. 


// int main()
// {
//     int val1=12;
//     int val2=2;

//     int *ptr1=&val1;
//     int *ptr2=&val2;

//     int a=ptr1-ptr2;

//     printf(" ptr1 %d \n",ptr1);
//     printf(" ptr2 %d \n",ptr2);
//     printf(" diff %d \n",a);

// return 0;
// }

//pointer addition
//Adding two addresses makes no sense because there is no idea what it would point to

