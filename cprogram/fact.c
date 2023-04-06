#include<stdio.h>

int fact(int n)
{
    //base case
    if(n==1 || n ==0)
    {
        return 1;
    }
   // recursive case
    int chhotiprob = fact(n-1);
    int badiproble = n* chhotiprob;
    // //follow above two cases
    printf(" %d",badiproble);
     return badiproble;
   // return n*fact(n-1);
   
}

int main()
{
    int n;
    printf(" ennter val : ");
    scanf("%d",&n);
    int ft;

    ft = fact(n);
    printf("factorial = %d",ft);
    return 0;

}