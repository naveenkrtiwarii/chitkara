#include<stdio.h>

//file handling -
//It enables us to create, update, read, and delete the files stored on the local file system through our C program.
// operations can be performed on a file- 
// Creation of the new file
// Opening an existing file
// Reading from the file
// Writing to the file
// Deleting the file

//types of file

//1. text files- 
//Text files contain data in the form of ASCII characters and are generally used to store a stream of characters. 
//Each line in a text file ends with a new line character (‘/n’). 

//2 Binary files-
//it is stored in binary format.
// The binary files can be created only from within a program and their contents can only be read by a program.

//function in file handling

// No.	Function	Description
// 1	fopen()	opens new or existing file or create a file 
// 2	fprintf()	write data into the file
// 3	fscanf()	reads data from the file
// 4	fputc()	writes a character into the file
// 5	fgetc()	reads a character from file
// 6	fclose()	closes the file
// 7	fseek()	sets the file pointer to given position
// 8	fputw()	writes an integer to file
// 9	fgetw()	reads an integer from file
// 10	ftell()	returns current position
// 11	rewind()	sets the file pointer to the beginning of the file


//Modes to Open a File in C
// Mode	Description
// r	opens a text file in read mode
// w	opens a text file in write mode
// a	opens a text file in append mode
// r+	opens a text file in read and write mode
// w+	opens a text file in read and write mode
// a+	opens a text file in read and write mode
// rb	opens a binary file in read mode
// wb	opens a binary file in write mode
// ab	opens a binary file in append mode
// rb+	opens a binary file in read and write mode
// wb+	opens a binary file in read and write mode
// ab+	opens a binary file in read and write mode


//to to create a file 

// int main()
// {
//     FILE *fp;
//     fp= fopen("student.txt","w");
//     //printf("%d",fp);
//     if(fp==NULL)
//     {
//         printf("error \n");

//     }
//     return 0;

// }


//opening a file

// int main()
// {
//     FILE *fp;
//     fp= fopen("hello.txt","r");
//     if(fp==NULL)
//     {
//         printf("error \n");

//     }
//     return 0;

// }

//writing data to a file

//method 1

// int main()
// {
//     FILE *fp;
//     fp= fopen("hello.txt","w");
//     if(fp==NULL)
//     {
//         printf("error \n");
      
//     }
//     fprintf(fp,"happy holi to all students\n");

//     fclose(fp);

//     return 0;

// }

//method 2


// int main()
// {
//     FILE *fp;
//     char str[100];

//     fp= fopen("hello.txt","w");
//     if(fp==NULL)
//     {
//         printf("error \n");
      
//     }
//     fprintf(fp,"hello student\n");

//     fclose(fp);

//     return 0;

// }



//reading a file

//method 1


int main()
{
    FILE *fp;
 

    fp= fopen("hello.txt","r");
    if(fp==NULL)
    {
        printf("error \n");
      
    }

    char ch;
    ch=getc(fp);

    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    fclose(fp);

//     do
//     {
//        ch = getc(fp);
//        printf("%c",ch);

//     } while(ch!=EOF);
    
//     return 0;
// }

//method 2

// int main()
// {
//     FILE *fp;
//     char ch;

//     fp= fopen("hello.txt","r");
//     if(fp==NULL)
//     {
//         printf("error \n");
      
//     }

//    fseek(fp,0,SEEK_END);
//    printf("%ld",ftell(fp));
   
//     fclose(fp);

//     return 0;
// }