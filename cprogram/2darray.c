#include<stdio.h>



//multidimensional
//anarray that has a dimension greater than one is known as a multidimensional array.

//2d array -
//simplest form of a multidimensional array
//2d array in C will follow zero-based indexing

//syntax
// data_type array_name[row][column];


//declaration

// int arr[2][3];
//in this type of declaration, the array is allocated memory in the stack and the size of the array should be known at the compile time 
//i.e. size of the array is fixed. 
//you must always specify the second dimension even if you are specifying elements during the declaration

//initialization
//1. Compile time initialization.
//2. Runtime initialization.


//initialization

//1. Compile time initialization- using Initializer List

//The number of elements in initializer list should always be less than or equal to the total number of elements in the array.


// int main()
// {
//     //method 1 

//     int arr1[2][3] ={1,2,3,4,5,6};

//     //method 2 
     
//      int arr2[2][3]={{10,20,30},{40,50,60}};

//     //Accessing Elements- using index number

//     printf("%d\n",arr1[1][2]);
//     printf("%d\n",arr2[0][3]); 

//     //diffrent ways of initialization

//      int arr3[][3]={1,2,3,4,5,6};

//        printf("%d\n",arr3[1][1]);

//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("arr1[%d][%d] : %d ",i,j,arr[i][j]);
//         }
//          printf("\n");
//     }
//        return 0; 
// }


//Runtime initialization - taking user input using loop

// int main()
// {
//     int arr[2][3]; //i=2 j=3

//     //for input
//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("arr[%d][%d] : ",i,j);
//             scanf("%d",&arr[i][j]);
//             printf("\n");
//         }
//     }

//     //for output
//      for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("arr[%d][%d] : %d ",i,j,arr[i][j]);
//         }
//          printf("\n");
//     }
// return 0;
// }



//2D Array and pointer

//traving in array using pointer in 1d array
//in 1D array, a single pointer can point to the first element of an array. 
//Using that pointer, we can traverse the entire array.

// int main()
// {
//     // int arr[]={1,2,3,4,5,6};
//     // int *ptr=arr; 
//     // for(int i=0; i<6; i++)
//     // {
//     //     printf("%d  ",*ptr);
//     //     ptr++;
//     // }
//     // printf("\n");

//     // int arr1[3][3]={{1,2,3},
//     //                 {4,5,6},
//     //                 {7,8,9}};
    
//     // int *ptr1[3];
//     // ptr1[0]=arr1[0]; //for 1st row
//     // ptr1[1]=arr1[1]; //for 2nd row
//     // ptr1[2]=arr1[2]; //for 3rd row


// //     for(int j=0; j<3; j++)
// //     {
// //         printf("%d ",ptr1[0][j]);
// //     }

// //     for(int j=0; j<3; j++)
// //     {
// //         printf("%d ",ptr1[1][j]);
// //     }

// //     for(int j=0; j<3; j++)
// //     {
// //         printf("%d ",ptr1[2][j]);
// //     }

// //     // printf("\n");


// //     // for(int i=0; i<3; i++)
// //     // {
// //     //     for(int j=0; j<3; j++)
// //     //     {
// //     //         printf("%d ",ptr1[i][j]);
// //     //     }
// //     //     printf("\n");
// //     // } 


//     return 0;
//  }

//character array

// int main()
// {
//     // char arr[3][3]={ 'a','b','c',
//     //                 'd','e','f',
//     //                 'g','h','i'};

//     // for(int row=0; row<3; row++)
//     // {
//     //     for(int col=0; col<3; col++)
//     //     {
//     //         printf("%c ",arr[row][col]);
//     //     }
//     //     printf("\n");
//     // }

//     printf("%c ",arr);
//     printf("%c ",arr[1]);
//     printf("%c ",arr[2]);

//     return 0;
// }

//Accessing Array Elements Using Pointer

//arr -                poitns to O th row and 0th element of the oth row
// arr+1 or (arr+1)  - points to 1st row and 0th element of the 1st row
// arr+2  or (arr+2) - points to 2nd row and 0th element of the 2nd  row
// arr+3 or (arr+3)  - points to 3 rd row and 0th element of the 3rd row
// and so on

// hence, In genral   (arr + i) - 0th element of the ith row

// int main()
// {
//     int arr[3][3]={{1,2,3},      // arr   -     1    2    3
//                     {4,5,6},     // arr+1 -     4    5    6  
//                     {7,8,9}};    // // arr+2  -    7    8    9  


//     // to access element of the row 
    
//     //for 1st row elements 

//     // *arr  - points 1st row
//     printf("First row elemets\n");
//     // *(arr)+0 - arr[0][0]
//     printf("%d \n",*(*(arr)+0));

//     // *(arr)+1 - arr[0][1]
//     printf("%d \n",*(*(arr)+1)); 

//     // *(arr)+2 - arr[0][2]
//     printf("%d \n",*(*(arr)+2));

//     printf("2nd row elemets\n");
//     //*(arr+1) - points 2nd row

//     // *(arr+1)+0 - arr[1][0]
//     printf("%d \n",*(*(arr+1)+0)); 

//     // *(arr+1)+0 - arr[1][1]
//     printf("%d \n",*(*(arr+1)+1)); 

//     // *(arr+1)+0 - arr[1][2]
//     printf("%d \n",*(*(arr+1)+2)); 

//     printf("3rd row elemets\n");
//     //*(arr+2) - points 3rd row

//     // *(arr+2)+0 - arr[2][0]
//     printf("%d \n",*(*(arr+2)+0)); 

//     // *(arr+1)+0 - arr[1][1]
//     printf("%d \n",*(*(arr+2)+1)); 

//     // *(arr+1)+0 - arr[1][2]
//     printf("%d \n",*(*(arr+2)+2)); 


//     //in general
//     //to access the elemets of the ith row and jth column
//     // *(*(arr+i)+j)

//     for(int i=0; i<3; i++)
//     {   printf("%d row \t",i+1);
//         for(int j=0; j<3; j++)
//         {
//             printf("%d ",*(*(arr + i)+j));
//         }
//         printf("\n\n");
//     }

//return 0;
// }


// to calculate total no of elemets in array

// total elements = row*column

// sizeof 2d array


// int main()
// {
//     int arr[3][3]={{1,2,3},      // arr   -     1    2    3
//                     {4,5,6},     // arr+1 -     4    5    6  
//                    {7,8,9}};    // // arr+2  -    7    8    9  


//     printf("sozeof : %d",sizeof(arr));

// return 0;

// }


//sum of array

// void show(int arr[3][3])
// {
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// int main()
// {
//     int arr1[3][3]={1,2,3,4,5,6,7,8,9};

//     int arr2[3][3]={1,2,3,4,5,6,7,8,9};

//     int sum[3][3];
//     printf("arr1 \n");
//     show(arr1);
//      printf("arr2 \n");
//     show(arr2);

//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             sum[i][j] = arr1[i][j]+arr2[i][j];
//         }
//     }

//     printf("sum of arr1 and arr2 \n");
//     show(sum);

//     return 0; 
// }


//product of tw0 array

// void show(int arr[3][3])
// {
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arr1[3][3]={1,2,3,4,5,6,7,8,9};

//     int arr2[3][3]={1,2,3,4,5,6,7,8,9}; 

//     int product[3][3];
//     printf("arr1 \n");
//     show(arr1);
//      printf("arr2 \n");
//     show(arr2);

//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             product[i][j] = arr1[i][j]*arr2[i][j];
//         }
//     }

//     printf("product of arr1 and arr2 \n");
//     show(product);

//     return 0; 
// }


//Matrix multiplication
// make sure that the number of columns in the 1st matrix is equal to the rows in the 2nd matrix


// void show(int arr[3][3])
// {
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arr1[3][3]={1,2,3,1,2,3,1,2,3};

//     int arr2[3][3]={1,2,3,1,2,3,1,2,3};

//     int product[3][3];
//     printf("arr1 \n");
//     show(arr1);
//      printf("arr2 \n");
//     show(arr2);

//     for(int i=0; i<3; i++)
//     {

//         for(int j=0; j<3; j++)
//         {   product[i][j]=0;
//             for(int k=0; k<3; k++)
//             {
//               product[i][j] += arr1[i][k]*arr2[k][j];
//             }
//         }
//     }

//     printf("product of arr1 and arr2 \n");
//     show(product);

//     return 0;
// }


//transpose of a matrix

// void show(int arr[][10], int r, int c)
// {
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     //int arr1[3][3]={1,2,3,1,2,3,1,2,3};

//     int r, c;
//     int arr[10][10];
//     int trans[10][10];
//     printf("enter row and column ");
//     scanf("%d%d",&r,&c);

//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {   
//             printf(" arr[%d][%d] ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     printf("arr1 \n");
//     show(arr,r,c);

//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<r; j++)
//         {   
//             trans[i][j]=arr[j][i];
//         }
//     }

//     printf("product of arr1 and arr2 \n");
//     show(trans,c,r);
//     return 0;
// }


//upper triangel of matrix


// void show(int arr[][10], int r, int c)
// {
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};

//     int r=3, c=3;
//     // int arr[10][10];
//     // int trans[10][10];
//     // printf("enter row and column ");
//     // scanf("%d%d",&r,&c);

//     // for(int i=0; i<r; i++)
//     // {
//     //     for(int j=0; j<c; j++)
//     //     {   
//     //         printf(" arr[%d][%d] ",i,j);
//     //         scanf("%d",&arr[i][j]);
//     //     }
//     // }

//     printf("arr \n");
//   //  show(arr,r,c);

//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<r; j++)
//         {   
//             if(i==j)
//             {
//                 printf("%d ",arr[i][j]);   
//             }   
//         }
//     }


//     return 0;
// }



// //largest element of a matrix

// #include<limits.h>
// void show(int arr[][10], int r, int c)
// {
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     //int arr1[3][3]={1,2,3,1,2,3,1,2,3};

//     int r, c;
//     int arr[100][100];
   

//     printf("enter row and column ");
//     scanf("%d%d",&r,&c);

//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {   
//             printf(" arr[%d][%d] ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     printf("arr1 \n");
//     show(arr,r,c);

//      int largest=INT_MIN;
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {   
//             if(largest<arr[i][j])
//             {
//                 largest=arr[i][j];
//             }
//         }
//     }

//     printf("largest element : %d\n",largest);
//     return 0;
// }



//minimum element of a matrix

// #include<limits.h>
// void show(int arr[][10], int r, int c)
// {
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     //int arr1[3][3]={1,2,3,1,2,3,1,2,3};

//     int r, c;
//     int arr[10][10];
//     int largest=INT_MAX;

//     printf("enter row and column ");
//     scanf("%d%d",&r,&c);

//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {   
//             printf(" arr[%d][%d] ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     printf("arr1 \n");
//     show(arr,r,c);
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {   
//             if(largest>arr[i][j])
//             {
//                 largest=arr[i][j];
//             }
//         }
//     }

//     printf("minimum element : %d\n",largest);
//     return 0;
// }


//find target

// int  main()
// {
//     int arr[100][100];
//     int r,c;
//     scanf("%d%d",&r,&c);

//     //input
//     for(int row=0;row<r;row++)
//     {
//         for(int col=0; col<c; col++)
//         {
//             scanf("%d",&arr[row][col]);
//         }
//     }

//     //output
//      for(int row=0;row<r;row++)
//     {
//         for(int col=0; col<c; col++)
//         {
//             printf("%d ",arr[row][col]);
//         }
//         printf("\n");
//     }

//     int target;
    
//     int col,row;

//     scanf("%d",&target);
//      for(row=0;row<r;row++)
//     {
//         for(col=0; col<c; col++)
//         {
//             if(target==arr[row][col])
//             {
//               //  printf("found");
//                // return 0;
//                fl=1;
//                break;
//             }
//         }
//         if(fl==1)
//         {
//             break;
//         }
//         printf("\n");
//     }
//    // printf("not found");

// if(fl==1)
// {
//     printf("found\n"); 
// }
// else
// {
//      printf("not found\n");
// }
// printf("jinga lala hoooo hoo");
// return 0;
// }

//print wave

// int  main()
// {
//     int arr[100][100];
//     int r,c;
//     scanf("%d%d",&r,&c);

//     //input
//     for(int row=0;row<r;row++)
//     {
//         for(int col=0; col<c; col++)
//         {
//             scanf("%d",&arr[row][col]);
//         }
//     }

//     //output
//      for(int row=0;row<r;row++)
//     {
//         for(int col=0; col<c; col++)
//         {
//             printf("%d ",arr[row][col]);
//         }
//         printf("\n");
//     }

//     //wave print

//     for(int col=0;col<c;col++)
//     {
//         //for even col
//         if(col%2==0)
//         {
//             for(int row=0;row<r;row++)
//             {
//                 printf("%d ",arr[row][col]);
//             }
//         }
//         else
//         {   //for odd col
//             for(int row=r-1; row>=0;row--)
//             {
//               printf("%d ",arr[row][col]);   
//             }
//         }
//     }

//     return 0;
// }


//spiral print

int  main()
{
    int arr[100][100];
    int r,c;
    scanf("%d%d",&r,&c);

    //input
    for(int row=0;row<r;row++)
    {
        for(int col=0; col<c; col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }

    //output
     for(int row=0;row<r;row++)
    {  
        for(int col=0; col<c; col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");

    }

    int sr=0;
    int er=r-1;
    int sc=0;
    int ec=c-1;


    while(sc<=ec && sr<=er)
    { 

        for(int col=sc; col<=ec;col++)
        {
            printf("%d ",arr[sr][col]);  
        }
        sr++;

        for(int row=sr; row<=er;row++)
        {
           printf("%d ",arr[row][ec]);     
        }
         ec--;

        for(int col=ec;col>=sc;col--)
        {
            printf("%d ",arr[er][col]);   
        }
        er--;

        for(int row=er;row>=sr; row--)
        {
            printf("%d ",arr[row][sc]);   
        }
        sc++;
    }

    return 0;
}


//wave 

// void wave(int arr[100][100],int r, int c)
// {

//  printf("wave ko dekho \n");
//     for(int col=0; col<c; col++)
//     {
//         if(col%2==0)
//         {
//             for(int row=0; row<r; row++)
//             {
//                 printf("%d ",arr[row][col]);
//             }
//         }
//         else
//         {
//             for(int row=r-1; row>=0; row--)
//             {
//                 printf("%d ",arr[row][col]);
//             }
//         }

//     }
// }
// int  main()
// {
//     int arr[100][100];
//     int r,c;
//     printf("enter row and col \n");
//     scanf("%d%d",&r,&c);
 
 
//  printf("enter elemets of arr \n");
//     //input
//     for(int row=0;row<r;row++)
//     {
//         for(int col=0; col<c; col++)
//         {
//             scanf("%d",&arr[row][col]);
//         }
//     }

//     //output
//      printf(" 2d array dekho \n");
//      for(int row=0;row<r;row++)
//     {
//         for(int col=0; col<c; col++)
//         {
//             printf("%d ",arr[row][col]);
//         }
//         printf("\n");
//     }

//     wave(arr,r,c);

// return 0;
// }

