//structure 
// It is user-defined data type.
// It is the collection of different data types under a single unit.
//struct’ keyword is used to create a structure.
//it can be local and global
//it cannot have static members

#include<stdio.h>
#include<string.h>

//declaration/to create structure
// struct student 
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// };

//structure variable - 
// It helps to access the member of the structure.

//structure variables declaration

//method 1- variable declaration with structure declaration.

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }stu;  //stu is a struct variable

//method 2 - By struct keyword within main() function

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }; 

// int main()
// {
//     struct student stu;  //stu is a struct variable

// }

//Accessing Structure Members

//method 1 - using (.) member/dot operator

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// } stu; 

// int main()
// {
//        // stu.name = "ram kumar";
//         strcpy(stu.name,"ram kumar");
//         stu.roll=12;
//         stu.grade='B';
//         stu.marks[0]=78;
//         stu.marks[1]=89;
//         stu.marks[2]=99;
//         stu.avg=(float)(stu.marks[0]+stu.marks[1]+stu.marks[2])/3;

//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }


// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }; 

// //struct student stu; 

// int main()
// {
//    // struct student stu; 
//        // stu.name = "ram kumar";
//         strcpy(stu.name,"ram kumar");
//         stu.roll=12;
//         stu.grade='B';
//         stu.marks[0]=78;
//         stu.marks[1]=89;
//         stu.marks[2]=99;
//         stu.avg=(float)(stu.marks[0]+stu.marks[1]+stu.marks[2])/3;

//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }

//method 2
//using arrow (->) operator (structure pointer/ pointer to a structure)

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }; 

// int main()
// {
//     struct student stu; 

//     struct student* ptr = &stu; //// ptr is a pointer to structure stu
    
//        // stu.name = "ram kumar";
//         strcpy(ptr->name,"ram kumar");
//         ptr->roll=12;
//         ptr->grade='B';
//         ptr->marks[0]=78;
//         ptr->marks[1]=89;
//         ptr->marks[2]=99;
//         ptr->avg=(float)(stu.marks[0]+stu.marks[1]+stu.marks[2])/3;

//         printf("name : %s\n",ptr->name);
//         printf("roll  : %d \n",ptr->roll);
//         printf("grade : %c\n",ptr->grade);
//         printf("marks 1  : %d \n",ptr->marks[0]);
//         printf("marks 2  : %d \n",ptr->marks[1]);
//         printf("marks 3  : %d \n",ptr->marks[2]);
//         printf("avg  : %f \n",ptr->avg);
//  return 0;
// }


//initialize structure members

//method 1
//initialized with declaration (only possible in cpp)
//members cannot be initialized with declaration in C.
/* when a datatype is declared, no memory is allocated for it. 
   memory is allocated only when variables are created.
*/

// struct student
// {
//     char name[50]="ram kumar";
//     int roll = 12;
//     char grade ='B';
//     int marks[3] ={ 78,89,99};
//     float avg = 99.78;
// }; 

// int main()
// {
//         struct student stu; 
//         // strcpy(stu.name,"ram kumar");
//         // stu.roll=12;
//         // stu.grade='B';
//         // stu.marks[0]=78;
//         // stu.marks[1]=89;
//         // stu.marks[2]=99;
//         // stu.avg=(float)(stu.marks[0]+stu.marks[1]+stu.marks[2])/3;

//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }


// method 2
//members can be initialized using {}

//variation 1
// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// };

// int main()
// {   
//         struct student stu = {"ram kumar",12,'B', 87, 90, 66, 99.33  }; 
//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }

//variation 2

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }   stu = { "ram kumar",12,'B', 87, 90, 66, 99.33 };  //try ; 

// int main()
// {
//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }

//variation 3


// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }   stu = { "ram kumar",12,'B', 87, 90, 66, 99.33 };  //try ; 

// int main()
// {
//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }


//variation 4
//it will throw error

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// } ; 

// int main()
// {
//         struct student stu;
//         stu={"ram kumar",12,'B', 87, 90, 66, 99.33};
//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }


//method 3
//designated Initialization- 
//It allows structure members to be initialized in any order.
// not available in C++

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// } ; 

// int main()
// {
//         struct student stu={.roll=12, .marks[0]=88, .name="ram kumar",.grade='B', .marks[1]=87, .avg=33.98,.marks[2]=90};
        
//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }

//types of structure declaration
//1. global declaration

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// } ; 

// int main()
// {
//         struct student stu={.roll=12, .marks[0]=88, .name="ram kumar",.grade='B', .marks[1]=87, .avg=33.98,.marks[2]=90};
        
//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);
// return 0;
// }


//2 local declaration

// int main()
// {
//         struct student
//         {
//             char name[50];
//             int roll;
//             char grade;
//             int marks[3];
//             float avg;
//         } ; 

//         struct student stu; 
//         strcpy(stu.name,"ram kumar");
//         stu.roll=12;
//         stu.grade='B';
//         stu.marks[0]=78;
//         stu.marks[1]=89;
//         stu.marks[2]=99;
//         stu.avg=(float)(stu.marks[0]+stu.marks[1]+stu.marks[2])/3;

//         printf("name : %s\n",stu.name);
//         printf("roll  : %d \n",stu.roll);
//         printf("grade : %c\n",stu.grade);
//         printf("marks 1  : %d \n",stu.marks[0]);
//         printf("marks 2  : %d \n",stu.marks[1]);
//         printf("marks 3  : %d \n",stu.marks[2]);
//         printf("avg  : %f \n",stu.avg);

// return 0;
// }


//creating more than one structure variables
//method 1

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// } stu1, stu2,stu3; 

// int main()
// {   
   
//         strcpy(stu1.name,"ram kumar");
//         stu1.roll=12;
//         stu1.grade='B';
//         stu1.marks[0]=78;
//         stu1.marks[1]=89;
//         stu1.marks[2]=99;
//         stu1.avg=(float)(stu1.marks[0]+stu1.marks[1]+stu1.marks[2])/3;

//         strcpy(stu2.name,"rama kumar");
//         stu2.roll=13;
//         stu2.grade='A';
//         stu2.marks[0]=98;
//         stu2.marks[1]=80;
//         stu2.marks[2]=89;
//         stu2.avg=(float)(stu2.marks[0]+stu2.marks[1]+stu2.marks[2])/3;

//         strcpy(stu3.name,"ravi rana");
//         stu3.roll=14;
//         stu3.grade='C';
//         stu3.marks[0]=58;
//         stu3.marks[1]=69;
//         stu3.marks[2]=89;
//         stu3.avg=(float)(stu3.marks[0]+stu3.marks[1]+stu3.marks[2])/3;

//         printf("name : %s\n",stu1.name);
//         printf("roll  : %d \n",stu1.roll);
//         printf("grade : %c\n",stu1.grade);
//         printf("marks 1  : %d \n",stu1.marks[0]);
//         printf("marks 2  : %d \n",stu1.marks[1]);
//         printf("marks 3  : %d \n",stu1.marks[2]);
//         printf("avg  : %f \n",stu1.avg);

//         printf("name : %s\n",stu2.name);
//         printf("roll  : %d \n",stu2.roll);
//         printf("grade : %c\n",stu2.grade);
//         printf("marks 1  : %d \n",stu2.marks[0]);
//         printf("marks 2  : %d \n",stu2.marks[1]);
//         printf("marks 3  : %d \n",stu2.marks[2]);
//         printf("avg  : %f \n",stu2.avg);


//         printf("name : %s\n",stu3.name);
//         printf("roll  : %d \n",stu3.roll);
//         printf("grade : %c\n",stu3.grade);
//         printf("marks 1  : %d \n",stu3.marks[0]);
//         printf("marks 2  : %d \n",stu3.marks[1]);
//         printf("marks 3  : %d \n",stu3.marks[2]);
//         printf("avg  : %f \n",stu3.avg);
// return 0;
// }

//method 2

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[3];
//     float avg;
// }; 

// int main()
// {   
//          struct student stu1, stu2,stu3;

//         strcpy(stu1.name,"ram kumar");
//         stu1.roll=12;
//         stu1.grade='B';
//         stu1.marks[0]=78;
//         stu1.marks[1]=89;
//         stu1.marks[2]=99;
//         stu1.avg=(float)(stu1.marks[0]+stu1.marks[1]+stu1.marks[2])/3;

//         strcpy(stu2.name,"rama kumar");
//         stu2.roll=13;
//         stu2.grade='A';
//         stu2.marks[0]=98;
//         stu2.marks[1]=80;
//         stu2.marks[2]=89;
//         stu2.avg=(float)(stu2.marks[0]+stu2.marks[1]+stu2.marks[2])/3;

//         strcpy(stu3.name,"ravi rana");
//         stu3.roll=14;
//         stu3.grade='C';
//         stu3.marks[0]=58;
//         stu3.marks[1]=69;
//         stu3.marks[2]=89;
//         stu3.avg=(float)(stu3.marks[0]+stu3.marks[1]+stu3.marks[2])/3;

//         printf("name : %s\n",stu1.name);
//         printf("roll  : %d \n",stu1.roll);
//         printf("grade : %c\n",stu1.grade);
//         printf("marks 1  : %d \n",stu1.marks[0]);
//         printf("marks 2  : %d \n",stu1.marks[1]);
//         printf("marks 3  : %d \n",stu1.marks[2]);
//         printf("avg  : %f \n",stu1.avg);

//         printf("name : %s\n",stu2.name);
//         printf("roll  : %d \n",stu2.roll);
//         printf("grade : %c\n",stu2.grade);
//         printf("marks 1  : %d \n",stu2.marks[0]);
//         printf("marks 2  : %d \n",stu2.marks[1]);
//         printf("marks 3  : %d \n",stu2.marks[2]);
//         printf("avg  : %f \n",stu2.avg);


//         printf("name : %s\n",stu3.name);
//         printf("roll  : %d \n",stu3.roll);
//         printf("grade : %c\n",stu3.grade);
//         printf("marks 1  : %d \n",stu3.marks[0]);
//         printf("marks 2  : %d \n",stu3.marks[1]);
//         printf("marks 3  : %d \n",stu3.marks[2]);
//         printf("avg  : %f \n",stu3.avg);
// return 0;
// }


//array of structures
//method 1
// It means- creating the array of structure variable.

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[4];
//     float avg;
// }stu[3];  //array of structure variable.


// int main()
// {  
  
//    for(int i=0; i<3; i++)
//    {
//       printf("enter student %d details\n",i+1);
//        printf("name : ");
//       scanf("%s",stu[i].name);
//        printf("\nroll : ");
//       scanf("%d",&stu[i].roll);
      
//        printf("\nmarks : ");
//        int sum=0;
//       for(int mrks=0;mrks<4;mrks++)
//       {
//           printf("\nmarks %d :  ",mrks+1);
//          scanf("%d",&stu[i].marks[mrks]);
//          sum=sum+stu[i].marks[mrks];
//       }

//       stu[i].avg=((float)sum)/4;

//       if((int)stu[i].avg>90)
//       {
//          stu[i].grade='A';
//       }
//       else if((int)stu[i].avg<90 && (int)stu[i].avg>=70)
//       {
//          stu[i].grade='B';
//       }
//       else
//       {
//          stu[i].grade='C';
//       }
//    }

//    for(int i=0; i<3;i++)
//    {

//         printf("name : %s\n",stu[i].name);
//         printf("roll  : %d \n",stu[i].roll);
      
//       for(int mrks=0;mrks<4;mrks++)
//       {

//         printf("marks %d  : %d \n",mrks+1,stu[i].marks[mrks]);

//       }
       
//       printf("avg  : %f \n",stu[i].avg);
//       printf("grade : %c\n",stu[i].grade);
      
//    }

// return 0;

// }

//method 2

// struct student
// {
//     char name[50];
//     int roll;
//     char grade;
//     int marks[4];
//     float avg;
// };  


// int main()
// {  
//    struct student stu[3]; //array of structure variable.
  
//    for(int i=0; i<3; i++)
//    {
//       printf("enter student %d details\n",i+1);
//        printf("name : ");
//       scanf("%s",stu[i].name);
//        printf("\nroll : ");
//       scanf("%d",&stu[i].roll);
      
//        printf("\nmarks : ");
//        int sum=0;
//       for(int mrks=0;mrks<4;mrks++)
//       {
//           printf("\nmarks %d :  ",mrks+1);
//          scanf("%d",&stu[i].marks[mrks]);
//          sum=sum+stu[i].marks[mrks];
//       }

//       stu[i].avg=((float)sum)/4;

//       if((int)stu[i].avg>90)
//       {
//          stu[i].grade='A';
//       }
//       else if((int)stu[i].avg<90 && (int)stu[i].avg>=70)
//       {
//          stu[i].grade='B';
//       }
//       else
//       {
//          stu[i].grade='C';
//       }
//    }

//    for(int i=0; i<3;i++)
//    {

//         printf("name : %s\n",stu[i].name);
//         printf("roll  : %d \n",stu[i].roll);
      
//       for(int mrks=0;mrks<4;mrks++)
//       {

//         printf("marks %d  : %d \n",mrks+1,stu[i].marks[mrks]);

//       }
       
//       printf("avg  : %f \n",stu[i].avg);
//       printf("grade : %c\n",stu[i].grade);
      
//    }

// return 0;

// }

//nested structures
//a structure inside another structure is called nested structure.

//method 1 - By separate structure
//we create seperate structure but the dependent structure should be used inside the main structure as a member

// struct dob
// {
//       int dd;
//       int mm;
//       int yyyy;
// };

// struct student
// {
  
//   char name[40];
//   int roll;
//   struct dob dob; //creating variable of student struct as structure as a member
  
// };

// int main()
// {
//    struct student stu;

//    //accesing members of structure
   
//    strcpy(stu.name,"ram");
//    stu.roll=12;
//    stu.dob.dd=12;
//    stu.dob.mm=05;
//    stu.dob.yyyy=2021;

//    printf("%s\n",stu.name);
//    printf("%d\n",stu.roll);
//    printf("%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

//    return 0;
// }

//method 2 -by embedded nested structure

//it allows to declare structure inside a structure and it requires fewer lines of code. 
//whenever an embedded nested structure is created, the variable declaration is compulsory at the end of the inner structure, which acts as a member of the outer structure. 
//it is compulsory that the structure variable is created at the end of the inner structure. 


// struct student
// {
  
//   char name[40];
//   int roll;

//    struct dob   //nested structure
//    {
//       int dd;
//       int mm;
//       int yyyy;
//    }dob;       //creating variable of student struct as structure as a member
  
//   //struct dob dob;  //it will throw error
// };

// int main()
// {
//    struct student stu;

//    //accesing members of structure
   
//    strcpy(stu.name,"ram");
//    stu.roll=12;
//    stu.dob.dd=12;
//    stu.dob.mm=05;
//    stu.dob.yyyy=2021;

//    printf("%s\n",stu.name);
//    printf("%d\n",stu.roll);
//    printf("%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

//    return 0;
// }

//Accessing Nested Structure

//1. using (.) operator
//2. using (->) operator

//method 1 - using . operator

// struct student
// {
  
//   char name[40];
//   int roll;

//    struct dob   //nested structure
//    {
//       int dd;
//       int mm;
//       int yyyy;
//    }dob;       //creating variable of student struct as structure as a member
  
//   //struct dob dob;  //it will throw error
// };

// int main()
// {
//    struct student stu;

//    //accesing members of structure
   
//    strcpy(stu.name,"ram");
//    stu.roll=12;
//    stu.dob.dd=12;
//    stu.dob.mm=05;
//    stu.dob.yyyy=2021;

//    printf("%s\n",stu.name);
//    printf("%d\n",stu.roll);
//    printf("%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

//    return 0;
// }

//method 2 - using (->) operator

// struct student
// {
  
//   char name[40];
//   int roll;

//    struct dob   //nested structure
//    {
//       int dd;
//       int mm;
//       int yyyy;
//    }dob;       //creating variable of student struct as structure as a member
  
//   //struct dob dob;  //it will throw error
// };

// int main()
// {
//    struct student stu;
//    struct student *ptr = &stu;

//    //accesing members of structure
   
//    strcpy(ptr->name,"ram");
//    ptr->roll=12;
//    ptr->dob.dd=12;
//    ptr->dob.mm=05;
//    ptr->dob.yyyy=2021;

//    printf("%s\n",stu.name);
//    printf("%d\n",stu.roll);
//    printf("%d-%d-%d\n",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

//    return 0;
// }


//Initializing Nested Structures members

//method 1
//The embeded structure is initialized first using the structure variable of that structure, then the parent structure is initialized next using that already initialized member of the embed structure.

//  struct student
// {
  
//   char name[40];
//   int roll;

//    struct dob   //nested structure
//    {
//       int dd;
//       int mm;
//       int yyyy;
//    }ddmmyy;       //creating variable of student struct as structure as a member
  
//   //struct dob dob;  //it will throw error
// };

// int main()
// {
//    struct dob ddmmyy = {13,05,2021}; //initializing nested struct first
   
//    struct student stu = {"raj", 12,ddmmyy};
  
//    printf("%s\n",stu.name);
//    printf("%d\n",stu.roll);
//    printf("%d-%d-%d\n",stu.ddmmyy.dd,stu.ddmmyy.mm,stu.ddmmyy.yyyy);

//    return 0;
// }


//method 2
//initializing both the parent structure and the nested structure together.


//  struct student
// {  
//   char name[40];
//   int roll;

//    struct dob   //nested structure
//    {
//       int dd;
//       int mm;
//       int yyyy;
//    }ddmmyy;       //creating variable of student struct as structure as a member
  
//   //struct dob dob;  //it will throw error
// };

// int main()
// {
   
//    struct student stu = {"raj", 12,{13,05,2022}};

//    printf("%s\n",stu.name);
//    printf("%d\n",stu.roll);
//    printf("%d-%d-%d\n",stu.ddmmyy.dd,stu.ddmmyy.mm,stu.ddmmyy.yyyy);

//    return 0;
// }


//structure and function

// //1. passing struct. members to a function

//  struct student
// {
  
//   char name[40];
//   int roll;
//   char grade;
// };

// void show(char *name,int roll, char grade)
// {
//    printf("%s\n",name);
//    printf("%d\n",roll);
//    printf("%c\n",grade);
   
// }
// int main()
// {
//    struct student stu;
//    scanf("%s",stu.name);
//    scanf("%d",&stu.roll);
//    scanf(" %c",&stu.grade);

//    //passing Structure Members To Functions

//    show(stu.name,stu.roll,stu.grade);

//    return 0;
// }


//2. An Array of Structures as Function Arguments

// struct student
// { 
//   char name[40];
//   int roll;
//   char grade;
// };

// void show(struct student stuarr[], int n)
// {
//    for(int i=0; i<=n-1; i++)
//    {
//    printf("%s\n",stuarr[i].name);
//    printf("%d\n",stuarr[i].roll);
//    printf("%c\n",stuarr[i].grade);
//    }
   
// }

// int main()
// {
//    int n;
//    struct student stu[10];
//    scanf("%d",&n);

//   for(int i=0; i<=n-1; i++)
//   {
//    scanf("%s",stu[i].name);
//    scanf("%d",&stu[i].roll);
//    scanf(" %c",&stu[i].grade);
//   }

//    show(stu,n); //calling show 

//    return 0;
// }


// 3.Pass Structure by Reference

//  struct student
// {
//   char name[40];
//   int roll;
//   char grade;
// };

// void show(struct student *ptr)
// {
//    printf("%s\n",ptr->name);
//    printf("%d\n",ptr->roll);
//    printf("%c\n",ptr->grade); 
// }

// int main()
// {
//    struct student stu;
//    scanf("%s",stu.name);
//    scanf("%d",&stu.roll);
//    scanf(" %c",&stu.grade);

//    show(&stu); //passing structure by Reference

//    return 0;
// }


//4. Return Structure from a Function

//  struct student
// {
//   char name[40];
//   int roll;
//   char grade;
// };

//  struct student infoinput() //structure named student infoinput function
// {
//     struct student stu;
//    scanf("%s",stu.name);
//    scanf("%d",&stu.roll);
//    scanf(" %c",&stu.grade);

//    return stu;  
// }

// int main()
// {
//   struct student st;

//     st=infoinput(); //calling infoinput()

//    printf("%s\n",st.name);
//    printf("%d\n",st.roll);
//    printf("%c\n",st.grade);
   
//    return 0;
// }


//size of structure variable

//  struct student
// {
//   char name[39];
//   int roll;
//   char grade;
// };

// int main()
// {
//   struct student stu;

//    printf(" size of structure variable : %d\n",sizeof(stu));

   
//    return 0;
// }


//structure padding 


//Bit Fields in structure
