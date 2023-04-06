#include<stdio.h>
#include <string.h>

//declration

// int main()
// {
//     char str[4];
// }

//initializing srtring


// int main()
// {
//     //method 1 
//     char str1[] = "group 5 ke bachche";

//     //method 2
//     char str2[30] = "group 5 ke good students";

//     //method 3
//     char str3[] = {'g','r','o','u','p',' ','5','\0'};

//     //method 4
//     char str4[30] = {'g','r','o','u','p',' ','5','\0'};
    
//     //method 5

//     char *str5 = "raam mohan";

//     printf(" str1 %s\n str2 %s \n str3 %s \n str4 %s \n str5 %s\n",str1,str2,str3,str4,str5);


// return 0;
// }

//memory representation 

// int main()
// {
//     char str[] = "tulsi"; //5 char + 1 null = 6

// }


//string input 

// int main()
// {
//     //method 1
//     // char str1[40];
//     // scanf("%s",str1);
//     // printf("str1 : %s\n",str1);

//      //method 2

//     // char str2[40];
//     // gets(str2);
//     // printf("str2: %s\n",str2);

//     char str3[40];
//     fgets(str3,10,stdin);
//     printf("str3: %s\n",str3);

// return 0;

// }


//accesssing char from string

// int main()
// {
//     char str[20] = "raam mohan tulsi";
//     //0-r, 1-a, 2-a, 3-m, 4- , 5-m

//     printf("%c\n",str[5]);
//     return 0;
// }


//size of string 

// int main()
// {
//     char str[] = "raam mohan";

//     //using sizeof
//     printf("sizeof %d\n",sizeof(str)); //couts null

//     //strlen
//     printf("strlen %d\n",strlen(str)); //ignores null

//     //cal size 

//     int i =0;
//     while(str[i]!='\0')
//     {
//         i++;
//     }

//         i=i+1;

//     printf("size of str : %d\n",i);
// }


//passing string to a function

// void show(char str[])
// {
//     printf(" %s\n",str);
// }

// int main()
// {
//     char str[] ="raam mohan khyati rohit";
//     show(str);
//     return 0;
// }

//pointer with string

// int main()
// {
//     char str[] ="raam mohan khyati rohit";

//     char *ptr = str;

//     printf("%s\n",ptr);

//    while(*ptr!='\0')
//    {
//     printf("%c",*ptr);
//     ptr++;

//    }

//     return 0;
// }


//traversing of string

// int main()
// {
//     char str[]= "raam mohan shweta";

    // int i =0;
    // while(str[i]!='\0') // for(i; str[i]!='\0'; i++)
    // {
    //     printf("%c\n",str[i]);
    //     i++;
    // }

//     int i =0;
//     while(str[i]!='\0')
//     {
//         printf("%c\n",str[i]);
//         i=i+2;;
//     }
// }


//reversing a string

// int main()
// {
//     char str[]= "vernika";
    
//     int i = strlen(str)-1;
//     while(i>=0)
//   // for(i;i>=0;i--)
//     {
//         printf("%c\n",str[i]);
//     i--;
 //   }

// }


//coping a string

// int main()
// {
//     // int a=9;
//     // int b=a;
//     // printf("a %d b %d",a,b);

//     char str1[]="raam mohan khatu natu matu";
//     char str2[100];

// //inbuilt method 

// //    strcpy(str2,str1);
// //     printf("str1 %s str2 %s \n",str1,str2);


//     int i=0;
//     while(str1[i]!='\0')
//     {
//         str2[i]=str1[i];   
//         i++;
//     }
//     str2[i]='\0';

//     printf("str1 %s str2 %s \n",str1,str2);

// }


//palindrome 

//raar - raar
//121 - 121
//1234 - 4321

// int main()
// {
//     char str[]="raar";
//     int j = strlen(str)-1;
//     for(int i =0; str[i]!='\0'; i++)
//     {
//             if(str[i]!=str[j])
//             {
//                 printf("not a palindrom\n");
//                 return 0 ;
//             }
//             j--;
//     }
//     printf("palindrome\n");
//     return 0;

//     int j = strlen(str)-1;
//     int i=0;
//     while(str[i]!='\0')
//     {
//             if(str[i]!=str[j])
//             {
//                 printf("not a palindrom\n");
//                 return 0 ;
//             }
//             j--;
//             i++;
//     }
//     printf("palindrome\n");
//     return 0;
// }


//two strings are equal or not 

// int main()
// {
//     char str1[50];
//     char str2[50];

//     fgets(str1,50,stdin);
//     fgets(str2,50,stdin);


//         //inbuilt fn
//       if(!strcmp(str1,str2))
//       {
//         printf("equal\n");
//       }
//       else
//       {
//         printf("not equal\n");
//       }


//     if(strlen(str1)==strlen(str2))
//     {
//         int i =0;
//         while(i<strlen(str1))
//         {
//             if(str1[i]!=str2[i])
//             {
//                 printf("not equal\n");
//                 return 0;
//             }
//             i++;
//         }
//         printf("equal");
//         return 0;
//     }
//     else
//     {
//          printf("not equal\n");
//     } 
    
//     return 0;
// }


//check Anagram of two strings

// void sort(char arr[])
// {
//     for(int i=0; i<strlen(arr)-1;i++)
//     {
//         for(int j=i+1; j<strlen(arr); j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 char temp;
//                 temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }    
// }

// int comp(char str1[],char str2[])
// {
//     int checkanagram=1;

//     if(strlen(str1)==strlen(str2))
//     {
//           sort(str1);
//           sort(str2);

//          for(int i=0; i<strlen(str1); i++)
//         {
//             if(str1[i]!=str2[i])
//             {
//                checkanagram=0;
//                break;
//             }
//         }
//       }
//     else
//     {
//       checkanagram=0;
//     }
//     return checkanagram;
// }

// int main()
// {
//     char str1[30], str2[30];
//     printf("string 1 ");
//     scanf("%s",str1);
//     printf("string 2 ");
//     scanf("%s",str2);

//   int i=comp(str1, str2); //0

//   //  if(comp(str1,str2))
//   //if(i==1)
//     // {
//     //    printf("anagram\n"); 
//     // }
//     // else
//     // {
//     //     printf("not anagram\n");
//     // }

// comp(str1,str2)?printf("anagram\n"):printf("not anagram\n");

// return 0;
// }



//Find Largest of N Strings.(Lexographically and Length)

//using inbuit function

void show(char str[][30],int n)
{
    for(int i=0; i<=n; i++)
    {
        printf("%s\n",str[i]);
    }
}

void sort(char str[][30],int n)
{
    for(int i=0; i<n-1;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            char temp[30];
            //  printf("str i  %d  %s \t str j %d  %s\n",i,str[i],j,str[j]);
            if(strcmp(str[i],str[j])>0)
            {
                  printf("str i  %d  %s \t str j %d  %s\n",i,str[i],j,str[j]);
               
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}

int largeststr(char str[][30],int n)
{
    printf("before sorting\n");
    show(str,n);

    sort(str,n);
    printf("after sorting\n");
    show(str,n);

    int maxidx;
    int max=strlen(str[0]);

    for(int i=1; i<n; i++)
    {
        int len=strlen(str[i]);
        if(len>max)
        {
            maxidx =i;
            max=len;
        }
    }
    return maxidx;
}

int main()
{
    char str[10][30] = {{"rom"}, {"ram"},{"shayam"},{"shyam"},{"ajay"},{"bharat"}};
    int n=6;
  //  char str[100][30];

   // printf("total string ");
    //scanf("%d",&n);

    // for(int i=0; i<n; i++)
    // {
    //     scanf("%s",str[i]);
    // }

    int idx=largeststr(str,n);
    printf("largest string is %s\n",str[idx]);

    return 0;
}



// int main()
// {
//     char str[1000];
//     // string input kartate rho jab tak user enter nhi karta

//     gets(str);
    

// }


