#include <stdio.h>

// int fun_sum(int x, int y)
// {
//     if(x == y)
//         return x;
//     else
//         return x + fun_sum(x + 1, y); 
// }

// int main()
// {
//     int n,x,y,sum,i;
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//          scanf("%d%d",&x,&y);
//          sum = fun_sum(x, y);
//          printf("%d\n",sum);
//          (sum%2==0)?printf("HAPPY\n"):printf("SAD\n");
//     }
//     return 0;
// }



//  int main() {
// 	int n;
// 	char N;
// 	N = 'N';
// 	n = 'n' - N;
// 	printf("%d", n);
// 	return 0;
// }

// int main() {
// 	int n;
// 	n = - -22;
// 	printf("n = %d", n);
//     return 0;
// }


// int main() {
// 	int n = 9;
// 	printf("%d %d %d %d %d", n++, n--, --n, ++n, n);
// return 0;
// }
//#include<string.h>

// void rev(char arr[],int n)
// {
//         if(n>=0)
//         {
//             printf("%c",arr[n]);
//             rev(arr,n-1);
//         }
// }

// int main()
// {
//     char ch[] ="raam mohan shyam";
//     int len=strlen(ch);

//     rev(ch,len-1);

// }


// int powr(int num, int n)
// { 
//     if(n==0)
//     {
//         return 1;
//     }
//     if(n==1)
//     {
//     return num;
//     }

//     // int chhoti = num;
//     // int badi = chhoti*powr(num,n-1);

//     // return badi;

//     return num*powr(num,n-1);
// }

// int main()
// {
//     printf("powr %d\n",powr(8,3));
// }



// int powr(int num)
// { static int n=1;
//    if(n>3)
//    {
//         return num;
//    }
//    n++;
//     return num*powr(num);
// }

// int main()
// {
//     printf("powr %d\n",powr(8));
// }


// #include <stdio.h>
// int main() {
//     int a = 10, b = 20;
//     printf("%d", a > b ? a : b);
//     return 0;
// }


// void sort(char arr[])
// {
//     int len=strlen(arr);
//     for(int i=0;i<len;i++)
//     {
//          for(int j=i+1;j<len-1;j++)
//          {
//              char temp;
//             if(arr[i]>arr[j])
//             {
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             }
//          }
//     }
// }

// int comp(char str1[], char str2[])
// {
//         int len1=strlen(str1);
//         int len2=strlen(str2);

//         int checkanagram=1;
//         if(len1==len2)
//         {
//             sort(str1);
//             sort(str2);
//             for(int i=0;i<len1;i++)
//             {
//                 if(str1[i]!=str2[i])
//                 {
//                     checkanagram=0;
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             checkanagram=0;
//         }

//     return checkanagram;
// }


// int main()
// {
//     char str1[30];
//     char str2[30];
//     fgets(str1,30,stdin);
//     fgets(str2,30,stdin);

//     int i=comp(str1,str2);
//     if(i==1)
//     {
//         printf("anagram\n");
//     }
//     else
//     {
//         printf("not an anagram\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     int x = 10, y = 20;
//     int *p1 = &x, *p2 = &y;
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     printf("%d %d", x, y);
//     return 0;
// }



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
//      printf("%d\n%d\n%d\n%d\n",cv,cc,cd,cs);
// }

// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     freqcount(str);
//     return 0;
// }


// int fibno(long int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     return fibno(n-1) + fibno(n-2);
// }
// int main()
// {
//     long int n;
//     scanf("%ld",&n);
//     printf("%ld\n",fibno(n));
//     return 0;  
// }



//check Anagram of two strings

// #include<stdio.h>
// #include<string.h>
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
//     scanf("%s",str1);
//     scanf("%s",str2);

//  comp(str1,str2)?printf("BLAST\n"):printf("BOMB\n");

// return 0;
// }


// int main()
// {
//     int a = 5, b = 10;
//     if (a > 0 && b++ > 10)
//     {
//         printf("A");
//     }
//     else
//     {
//         printf("B");
//     }
// printf("%d", b);

    
// return 0;
// }


// #include<stdio.h>
// void uppercase(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         if((str[i]>='a' && str[i]<='z'))
//         {
//             str[i]=str[i]-32;
//         }
//         i++;
//     }    
// }

// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     uppercase(str);
//     printf("%s\n",str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[51], str2[51];
//     int freq1[26] = {0}, freq2[26] = {0};
//     int i, len1, len2;

//     printf("Enter the first string: ");
//     fgets(str1, 51, stdin);

//     printf("Enter the second string: ");
//     fgets(str2, 51, stdin);

//     len1 = strlen(str1) - 1; // exclude newline character
//     len2 = strlen(str2) - 1; // exclude newline character

//     if (len1 != len2)
//     {
//         printf("BOMB\n");
//         return 0;
//     }

//     // count frequency of characters in first string
//     for (i = 0; i < len1; i++)
//     {
//         freq1[str1[i] - 'a']++;
//     }

//     // count frequency of characters in second string
//     for (i = 0; i < len2; i++)
//     {
//         freq2[str2[i] - 'a']++;
//     }

//     // compare frequency of characters in both strings
//     for (i = 0; i < 26; i++)
//     {
//         if (freq1[i] != freq2[i])
//         {
//             printf("BOMB\n");
//             return 0;
//         }
//     }

//     printf("BLAST\n");

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     char str[100];
//     int i;

//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }

//     printf("The string in lowercase: %s", str);

//     return 0;
// }


// #include<stdio.h>
// int countsetbits(int num)
// {
//     int count=0;
// 	while(num>0)
// 	{
// 		if(num%2==1)
// 		{
// 			count++;
// 		}
// 		num=num/2;	
// 	}	
// 	return count;
// }

// int main() 
// {
// 	int n,i;
// 	scanf("%d",&n);
// 	for(i=1; i<=n; i++)
// 	{
//         int num;
// 	    scanf("%d",&num);
// 	   	printf("%d\n",countsetbits(num));
// 	}
// 	return 0;
// }



// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int rowno=1; rowno<=n+1;rowno++)
//     {
//         int num=n; 
//         for(int cts=1; cts<=rowno; cts++)
//         {
//             printf("%d ",num);
//             num--;    
//         }
//         for(int ctsp=1;ctsp<=2*(n-rowno)+1; ctsp++)
//         {
//             printf("  ");
//         }
//         for(int cts=1; cts<=rowno; cts++)
//         {
//              if(num<=0)
//              {
//                  num=1;
//              }
//              else
//              {
//                   ++num;
//              }
//             if(rowno==n+1 && cts==n+1)
//             break;
//             printf("%d ",num);    
//         }
//         printf("\n");
//     }
//     for(int rowno=n; rowno>=1;rowno--)
//     {
//         int num=n; 
//         for(int cts=1; cts<=rowno; cts++)
//         {
//             printf("%d ",num);
//             num--;    
//         }
//         for(int ctsp=1;ctsp<=2*(n-rowno)+1; ctsp++)
//         {
//             printf("  ");
//         }
        
//         num++;
//         for(int cts=1; cts<=rowno; cts++)
//         {
            
//             printf("%d ",num);
//             num++;
            
//         }  
//         printf("\n");
      
//     }   
// return 0;
// }


// #include<stdio.h>
// int main() 
// {
// 	int n, esum=0, osum=0 ,i=1;;
// 	scanf("%d",&n);
// 	while(n>0)
// 	{
// 		if(i%2==0)
// 		{
// 			esum=esum+n%10;
// 		}
// 		else
// 		{
// 			osum=osum+n%10;
// 		}
// 		n=n/10;
// 		i++;
// 	}
// 	printf("%d\n%d\n",osum,esum);
// 	return 0;
// }


// #include<stdio.h>
// int main () {
//     int N,num,largest,i=1;
//     scanf("%d",&N);
//     scanf("%d",&num);

// 	largest=num;
// 	while(i<N)
// 	{
// 		scanf("%d",&num);
// 		if(num>largest)
// 		largest=num;
// 		i++;
// 	}
// 	printf("%d\n",largest);
// 	return 0;
// }


// #include<stdio.h>
// struct student
// {
//    char name[50];
//    int roll;
//    char grade;
//    int marks[3];
//    float avg;
// }; 
// int main()
// {
//     struct student stu;
// 	stu={.marks[0]=88,.marks[1]=87,.marks[2]=90};

//     printf("%d",stu.marks[2]);
//     printf("%d",stu.marks[1]);
//     printf("%d",stu.marks[0]);
//     return 0;
// }

#include<stdio.h>
// enum subject { hindi=29, english, maths=29, computer };
// int main()
// {
//     enum subject name;
//     name = english;
//     printf("%d",name);
//     name = computer;
//     printf("%d",name);
// 	return 0;
// }

// union student
// { 
//    int roll;
//    char grade;
//    float avg;
//    double val;
// };	

// int main()
// {
//  	stu.roll=10;
//     stu.grade='B';
//    	stu.avg=78.32;   
//     printf("%.2f\n",stu.avg);
//     return 0;
// }  


// #include <stdio.h>
// int fn(int base, int a)
// {
//     if (a != 0)
//     return (base * fn(base, a - 1));
//     else
//     return 1;
// }
// int main() 
// {
// 	int base, a, result;
//     base=3;
//     a=2;
//     result = fn(base, a);
//     printf("%d",result);
//     return 0;
// }
		

// #include<stdio.h>
// #define fun(a,b) a*b

// int main()
// {
//     int a=9;
//     int b=9;
//     printf("%d\n",fun(a,b));
//     return 0;
// }

// #include<stdio.h>
// int func(int i, int j)
// {
//     static int m=0;
//     m+=j;
//     if(m%i==0 && m%j==0)
//     {
//          return m;
//     }
//     else
//     {
//         func(i,j);
//     }
// }
// int main()
// {
//     int n1;
//     int n2;
//     scanf("%d",&n1);
//     scanf("%d",&n2);
//     int m=0;
//     if(n1>n2)
//     {
//         printf("%d\n",func(n2,n1));
//     }
//     else
//     {
//         printf("%d\n",func(n1,n2));
//     }
// }


// #include<stdio.h>
// int maximum(int arr[],int n)
// {
// 	long int max= -1000000000;

// 	for(int i=0;i<n;i++)
// 	{
// 		if(arr[i]>max)
// 		{
// 			max=arr[i];
// 		}
// 	}
// 	return max;
// }

// int main() {
// 	int arr[100000];
// 	long int n;
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++)
// 	{
//         scanf("%d",&arr[i]);
// 	}
//     printf("%d",maximum(arr,n));
// 	return 0;
// }


// #include<stdio.h>
// int fibonnaci(int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     return fibonnaci(n-1)+ fibonnaci(n-2);
// }
// int main() {
// 	int n;
//     scanf("%d",&n);
// 	printf("%d\n",fibonnaci(n));
// 	return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//         char str[100], countw=0, i;
//         fgets(str,100,stdin);

//         int len=strlen(str);
//         for(i=0; i<len; i++)
//         {
//                 if(str[i]==' ')
//                 {
//                         countw++;
//                 }
//         }
//         printf("%d\n",countw+1);
//         return 0;
// }


// int main()
// {
//     int x=4;
//     printf("%d %d", (x << 1), (x >> 1));
// }

// #include<stdio.h>
// enum statusCode
// {
// ok=200, notFound=404, serverError=500
// };
// int main()
// {
// //enum statusCode code;
// //code=ok;
// printf("%d",ok);
// }

// #include<stdio.h>
// struct student
// {
// char name[50];
// int roll;
// char grade;
// int marks[3];
// float avg;
// };
// int main()
// {
// struct student stu={.marks[0]=88,.marks[1]=87,.marks[2]=90};

// printf("name ");

// //gets(stu.name);
// fgets(stu.name,100,stdin);

// //scanf("%s",stu.name);

// printf("name %s",stu.name);

// printf("%d",stu.marks[2]);
// printf("%d",stu.marks[1]);
// printf("%d",stu.marks[0]);
// return 0;
// }


#include<stdio.h>
#include <string.h>

long convertBinary(int);

// int main()
// {
//     long biNo;
//     int decNo;
	
// 	printf("\n\n Recursion : Convert decimal number to binary :\n");
// 	printf("---------------------------------------------------\n");

//     printf(" Input any decimal number : ");
//     scanf("%d",&decNo);

//     biNo = convertBinary(decNo);//call the function convertBinary
//     printf(" The Binary value of decimal no. %d is : %ld\n\n",decNo,biNo);
//     return 0;
// }
// long convertBinary(int decNo)
// {
//     //static long biNo,r,fctor = 1;
//      long biNo=0,r=0,fctor = 1;
//     if(decNo != 0)
//     {
//          r = decNo % 2;
//          biNo = biNo + r * fctor;
//          fctor = fctor * 10;
//          printf("r %d biNo %d factor %d \n",r,biNo,fctor);

//          convertBinary(decNo / 2);//calling the function convertBinary itself recursively
//     }
//     return biNo;
// }



// int main()
// {
 
//     for(int i=0; i<5; i++)
//     { //  static int a=5;
//           int a=5;

//        a+=10;

//  printf("%d \n",a);

//     }
// //printf("%d \n",a);

// return 0;
    
// }


// #include <stdio.h>

// int parenthesis(int n,int open,int close,int idx,char* ans)
// {
//     if(idx==2*n)
//     {
//         printf("%s\n",ans);
//     }
//     if(open<n)
//         {
//             ans[idx]='(';
//             parenthesis(n,open+1,close,idx+1,ans);
//     }
//     if(close<open)
//         {
//             ans[idx]=')';
//             parenthesis(n,open,close+1,idx+1,ans);
//     }
//     return 0;
// }

// int main()
// {
//     char ans[100]="()()";
//     int n;
//     scanf("%d",&n);
//     parenthesis(n,0,0,0,ans);
//     return 0;
// }


// struct check
// {
//     // int a;
//     // float b;
//     // char ch;
//    // double c;   
//   int arr[20];

// }stu;

// int main()
// {
//     char *ch="raam";
//     *(ch)='b';

//     printf(" %d \n",sizeof(ch));
//      printf(" %d \n",strlen(ch));

//     return 0;
// }
