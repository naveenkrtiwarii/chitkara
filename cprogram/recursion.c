#include<stdio.h>
#include<stdbool.h>

//recursion - calling itself again and again


// int fun( int a)
// {
//     if(a==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 5 + fun(a-1);
//     }
// }

// int main()
// {
//     int a =3;
//     int val;
//     val = fun(a);
//     printf("val %d ",val);
    
// }

//factorial of a number

// int fact(int n)
// {
//     //base case
//     if(n==0)
//     {
//         return 1;
//     }

//     //recursive case

//    // int chhotiproblem = fact(n-1); //pure assumption

//     //find ans with the help of above two

//    // int badiproblem = n*chhotiproblem; //yahan hum store kar rhe hain 

//   //  return badiproblem;


//   //or 

//   return n*fact(n-1); //without storing

// }

// int main()
// {
//     int n,factval;
//     scanf("%d",&n);

//     factval= fact(n);

//     printf("%d\n",factval);
//     return 0; 
// }


//find nth fibonacci number 

// int fibno(int n)
// {
//     //base case

//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     //recursive case

// //with storing 
//     int chhotiproblem1=fibno(n-1);
//     int chhotiproblem2=fibno(n-2);
//     int badiproblem = chhotiproblem1 + chhotiproblem2;
//     return badiproblem;
    
//     or

// //without storing

//     return fibno(n-1) + fibno(n-2);

// }

// int main()
// {
//     int n;
//     scanf("%d",&n);

//     int num = fibno(n);
//     printf("%d\n",num);

//     return 0;  
// }


// //is array sorted or not

// bool issortedornot(int *arr, int n)
// {
//     //base case 

//     if(n==1 || n==0)
//     {
//         return true;
//     }

//     //recursive case
//     bool issort = issortedornot(arr+1,n-1);
//     if(arr[0]<arr[1] && issort==true)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }


// }

// int main()
// {
//     int arr[] = {7,1,4,5,8,9};

//     int n=sizeof(arr)/sizeof(int);

//   bool x=  issortedornot(arr,n);

//   printf("is  array sorted : %d",x);
//   return 0;

// }
