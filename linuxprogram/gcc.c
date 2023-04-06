#include<stdio.h>


//gcc Compiler

//GCC stands for GNU Compiler Collections.
//used to compile mainly C, C++ , Objective C and Objective C++.language.
//GCC is a portable tool, and it can run on many operating systems. 
//it can be ported to Windows by using some tools such as Cygwin, MinGW, and MinGW-W64.

//installation

//step 1
// $sudo apt-get update

//step 2
// $sudo apt install build-essential


//check version
// $gcc --version

//compilation using gcc

//for c
//gcc file.c -o file(object file name)

//for c++
//g++ file.c -o file(object file name)


//Enable all Warnings -wall
//enables all warnings in the output
//gcc -wall file.c -o file(object file name)


//Produce the stepwise output of the compilation process -E
//gcc -E file.c>file.i


//Print the output verbosely.
//gcc -W -v file.c

#include<stdio.h>

int main()
{
    printf("hello students\n");
    return 0;
}


