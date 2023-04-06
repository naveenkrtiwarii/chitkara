#include<stdio.h>
#include<limits.h>


// void show(int arr[2][3])
// {
//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//                printf("%d ",arr[i][j]);

//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     //sum of two array

//     int arr1[2][3] = {1,2,3,4,5,6};
//     int arr2[2][3] = {1,2,3,4,5,6};
//     int sum[2][3];


//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//                 sum[i][j]=arr1[i][j]+arr2[i][j];

//         }
//     }

//     int mul[2][3];
//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//                 mul[i][j]=arr1[i][j]*arr2[i][j];

//         }
//     }
// printf("arr1 \n");
// show(arr1);
// printf("arr2 \n");
// show(arr2);
// printf("sum \n");
// show(sum);
// printf("multi \n");
// show(mul);


//     return 0;
// }

//largest

int main()
{
        int  arr[3][3];

        int largest=INT_MIN;

        int minimum= INT_MAX;

        printf(" min val of int %d \n ",largest);

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                    printf(" arr[%d][%d] ",i,j);
                    scanf("%d",&arr[i][j]);

                    if(largest<arr[i][j])
                    {
                        largest=arr[i][j];
                    }
                    if(minimum>arr[i][j])
                    {
                        minimum=arr[i][j];
                    }
                    


            }
        }

        printf("largest : %d\n", largest);
         printf("mini val : %d\n", minimum);
        return 0;
         
}