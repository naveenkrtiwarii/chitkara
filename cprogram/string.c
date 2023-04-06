#include<stdio.h>
#include<string.h>

//string -
//a sequence of characters terminated with a null character ‘\0’
//ASCII val of '\0' is 0 (zero)
//an 1D array of characters. 
//Each character in the array occupies one byte of memory

//declaration of strings
//char name[size];

// int main()
// {
//     char str[100];
// }


//initializing a string

// int main()
// {
//     //method 1 without size
//  //   char ch[] = {'a', 'b'};
//     char str1[] = "chitkara ke honhar bachche"; //without size
   

//     //method 2 with size
//     char str2[50] = "chitkara ke honhar bachche"; 

    
//     //method 3 assigning character by character without size
    
//     char str3[] = {'c','h','i','t','k','a','r','a',' ','k','e', ' ','h','o','n','h','a','r',' ','b','a','c','h','c','h','e','\0'}; 
    
//     //method 4 // assigning character by character with size
    
//     char str4[50] = {'c','h','i','t','k','a','r','a',' ','k','e', ' ','h','o','n','h','a','r',' ','b','a','c','h','c','h','e','\0'};

//       //method 5
//       char *str5 =  "chitkara ke honhar bachche"; 

//     printf("str1 %s\n str2 %s \n str3 %s \nstr4 %s\n str5 %s\n",str1,str2,str3,str4,str5);
//     return 0;

// }


// memory representation of the string 

// int main()
// {
//       char str[5]="raam";
//       printf("%c\n",str[3]);
// }

//string input


// int main()
// {
//     //method 1
//     char str1[50];
//     scanf("%s",str1);

//     //method 2
//     char str2[50];
//     gets(str2);

//     //method 3
//     char str3[50];
//     fgets(str3,50,stdin);


//     printf("str1 %s\n str2 %s \n str3 %s\n",str1,str2,str3);
//     return 0;

// }


//accessing char from string 

// int main()
// {
//     char str[4] = "raam";
//     printf("%s %c",str,str[3]);

// }


//passing string to a function

// void show1(char str[])
// {
//     printf("str %s\n",str);
// }

// void show2(char *str)
// {
//     printf("%s",str);
// }
// int main()
// {
//     char str[10]="raam mohan";
//     show1(str);
//     show2(str);

// }

//strings with Pointers

// int main()
// {
//     char str[10]="raam mohan";
//     char *ptr =str;

//     while(*ptr!='\0')
//     {
//         printf("%c",*ptr);
//         ptr++;
//     }
//     return 0;
// }


//size of string

// int sizeofstr(char str[]); //forward declaration

// int main()
// {
//       char str[] ="raam mohan";
      
//       //using inbuilt function
//       printf("sizeof = %d\n",sizeof(str)); //couts null

//       printf(" strlen = %d\n",strlen(str)); //ignores null

//       //user fn
//       printf("size of str : %d",sizeofstr(str));
//       return 0;
// }

// int sizeofstr(char arr[])
// {
//       int i=0;
//       while(arr[i]!='\0')
//       {
//             i++;
//       }
      
//       return i;
// }



//traversing string

// int main()
// {
//     char *str="raam mohan rohit mohit";
    
//     int i=0;
//     while(str[i]!=0)
//     {
//         printf("%c",str[i]);
//         i++;
//     }
//     return 0;
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
 //return 0;
// }


//concatenating string - 
//appending one string to the end of another string

// int main()
// {
//       char name[30] = "raam";
//       char surname[40] = "kumar";

//       char fullname[70];
      
//       int i=0, j=0;
//       while(name[i]!='\0')
//       {
//             fullname[j]=name[i];
//             i++;
//             j++;
//       }
//       i=0;
//       while(surname[i]!='\0')
//       {
//             fullname[j]=surname[i];
//             i++;
//             j++;
//       }
//       fullname[j]='\0';
//       printf("full name = %s ",fullname);

//       return 0;    
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
// return 0;
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
//two strings are anagrams if they contain the same characters but in a different order.
// note that a letter has to be used only once.
//bat - tab , cat tac

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


// void show(char str[][30],int n)
// {
//     for(int i=0; i<=n; i++)
//     {
//         printf("%s\n",str[i]);
//     }
// }

// void sort(char str[][30],int n)
// {
//     for(int i=0; i<n-1;i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             char temp[30];
//             //  printf("str i  %d  %s \t str j %d  %s\n",i,str[i],j,str[j]);
//             if(strcmp(str[i],str[j])>0)
//             {
//                   printf("str i  %d  %s \t str j %d  %s\n",i,str[i],j,str[j]);
               
//                 strcpy(temp,str[i]);
//                 strcpy(str[i],str[j]);
//                 strcpy(str[j],temp);
//             }
//         }
//     }
// }

// int largeststr(char str[][30],int n)
// {
//     printf("before sorting\n");
//     show(str,n);

//     sort(str,n);
//     printf("after sorting\n");
//     show(str,n);

//     int maxidx;
//     int max=strlen(str[0]);

//     for(int i=1; i<n; i++)
//     {
//         int len=strlen(str[i]);
//         if(len>max)
//         {
//             maxidx =i;
//             max=len;
//         }
//     }
//     return maxidx;
// }

// int main()
// {
//     char str[10][30] = {{"rom"}, {"ram"},{"shayam"},{"shyam"},{"ajay"},{"bharat"}};
//     int n=6;
//   //  char str[100][30];

//    // printf("total string ");
//     //scanf("%d",&n);

//     // for(int i=0; i<n; i++)
//     // {
//     //     scanf("%s",str[i]);
//     // }

//     int idx=largeststr(str,n);
//     printf("largest string is %s\n",str[idx]);

//     return 0;
// }


//Frequency of Characters in String

// int freqcount(char *str, char ch)
// {
//     int count=0;
//     for(int i=0;str[i]!=0; i++)
//     {
//         if(str[i]==ch)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     char str[100];
//     char ch;
    
//     fgets(str,100,stdin);
//     ch = getchar();  //char input
//     printf(" freq of char : %d",freqcount(str,ch));
// }


//Number of Vowels, Consonants, Digits, Spaces in String

// void freqcount(char *str)
// {
//     int cv=0, cc=0, cd=0, cs=0;

//     for(int i=0;str[i]!=0;i++)
//     {
//         if(str[i]=='a' ||str[i]=='A' || str[i]=='e' ||str[i]=='E' || str[i]=='i' ||str[i]=='I' || str[i]=='o' ||str[i]=='O' || str[i]=='u' ||str[i]=='U')
//         {
//             cv++;
//         }
//         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
//         {
//             cc++;
//         }
//         else if(str[i]==' ')
//         {
//             cs++;
//         }
//         else if(str[i]>='0' && str[i]<='9')
//         {
//             cd++;
//         }
//     }
//     // printf("Vowels %d  Consonants %d  Digits %d Spaces %d \n",cv,cc,cd,cs);
//      printf("%d\n%d\n%d\n%d\n",cv,cc,cd,cs);
// }

// int main()
// {
//     //char str[100]="raam mohan gyan shubham eeya iya 123 UAE Ar";
//     char str[100];
//     fgets(str,100,stdin);
//     freqcount(str);
//     return 0;
// }



// Remove Characters in String Except Alphabets
//raam420 & # rmohan - raammohan

// void rmvchar(char str[])
// {
//     //method 1

//     int len=strlen(str);
//     char temp[len];

//     int i=0, j=0;
//     while(str[i]!=0)
//     {
//         if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
//         {
//             temp[j]=str[i];
//             j++;
//         }
//         i++;
//     }
//     temp[j]='\0'; 
//     strcpy(str,temp);

//     //method 2
//     // int len=strlen(str);
//     // for(int i=0; i<len; i++)
//     // {
//     //     if(!((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')))
//     //     {
//     //        str[i]='\0';
//     //     }

//     // }    
// }

// int main()
// {
//    // char str[] = "raammohan420rohit45#@@*&^shakti";
//    char str[100];
//    scanf("%s",str);
//     printf("before str %s\n",str);
//     rmvchar(str);
//     printf("after str %s\n",str);
// }

