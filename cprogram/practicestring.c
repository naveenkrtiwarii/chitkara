#include<stdio.h>
#include<string.h>

// int main()
// {
    //"raam"
   // char str[]={'r','a','a','m','\0'} ;

// char str[]= "raam";
//     //size of string 

//     printf("sizeof : %d\n",sizeof(str)); //r a a m \0


//     printf("strlen : %d\n",strlen(str)); //r a a m

//     printf("str name %s \n",str);


//     int i=0;
//     //r a a m 

//     //without null 
//  char str[] = "raM MOHAN SHAYAM";
//     while(str[i]!='\0')
//     {
//         i++;
//     }
//      i=i+1;

//     printf(" size of str %d \n",i);

// }


// int main()
// {
     char str[50];
//    // scanf("%s",str);

    gets(str);

//  //fgets(str,20,stdin);
     printf(" %s \n",str);
// }


//accessing char from string

// int main()
// {
//     char str[40];
//     gets(str); //r=0, a=1, a=2, m=3,  mohan

// //printf(" 3rd index par kya hain ; %c \n ",str[3]);
// int i =1;
// while (str[i]!='\0')
// {
//     printf("%c\n",str[i]);
//     i=i+2;
// }


// return 0;

// }

//passing string to a function

// void show(char str[])
// {
//     printf("msg : %s\nsize : %d",str,strlen(str));

// }

// int main()
// {
//     char str[] = "pritish prashant 64 others";
//     show(str);
// }


//string with pointer

// int main()
// {
//     char str[30]="raam mohan";
//     char *ptr =str;

//     while(*ptr!='\0') //raam = 100=r 101 a 102 a 103 m
//     //ptr++
//     {
//         printf("%c \n",*ptr); 
//         ptr++;
//     }
// }


//copy a string 

// int main()
// {
//     char str[30] = "raam aam khata hain";

//     int a=6;
//     int b=a;
//     int c;
//      c=b;

//  //    printf(" int bhai log a %d  b = %d c =%d\n",a,b,c);

//     char cpstr[30];

//     //using inbuilt function 

//    // strcpy(cpstr,str);

//    //  printf("string bhai log cpstr : %s\n",cpstr);


//     //user fun  //raam aam khata hain \0
//         int i;
//    // while(str[i]!='\0')
//     for(i=0;str[i]!='\0';i++)
//     {
//         cpstr[i]=str[i];
//        // i++;
//     }

//     cpstr[i]='\0';

//     printf("humra function string bhai log cpstr : %s\n",cpstr);


// return 0;
// }

//reverse a string 

// int main()
// {
//     char str[30] = "raam aam khata hain";
//     int i;
//     i = strlen(str);
   
//     for(i;i>=0;i--)
//     {
        
//         printf("%c",str[i]);
//     }

// return 0;
// }

//palindrome 

//rar = rar
//naveen neevan


// int main()
// {
//     char str[30] = "raar";

//    int i = strlen(str)-1;
//    int j=0;
//     for(i;i>=0;i--)
//     {
//         if(str[i]!=str[j])
//         {
//             printf("not a palindrome\n");
//             return 0;
//         }
//         j++;
//     }

//      printf("palindrome\n");
// return 0;
// }

