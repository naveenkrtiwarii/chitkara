#include<stdio.h>

//Enumeration or enum
//user defined data type
//it consists of integer values, and it provides meaningful names to these values
//defined by using the enum keyword
//First value is by default 0
//enum flag{constant1, constant2, constant3, ....... };
//By default, the values of the constants are as follows:
// constant1 = 0, constant2 = 1, constant3 = 2 and 
// so on.


// enum declaration

//method 1

//enum friends {ram, ravi, raja, ramesh}name;

//or

// enum friends 
// {   ram,
//     ravi,
//     raja,
//     ramesh
// } name;


//method 2

// enum friends 
// {   ram,
//     ravi,
//     raja,
//     ramesh
// };
// enum friends name;

//Initialization of Enum values

//First value is by default 0

// enum friends 
// {   ram,
//     ravi, //2
//     raja, //3
//     ramesh //4
// };

// int main()
// {
//     enum friends name;

//     name = raj;

//     printf("friend's name : %d\n",name);

// return 0;
// }

// //method 2- First value is 1

// enum friends 
// {   ram=1,
//     ravi,
//     raja, 
//     ramesh 
// };

// int main()
// {
//     enum friends name;

//     name = ravi;

//     printf("friend's name : %d\n",name);

// return 0;
// }

// //method 3- First value is any number

// enum friends 
// {   ram=12,
//     ravi,
//     raja,
//     ramesh
// };

// int main()
// {
//     enum friends name;

//     name = ramesh;

//     printf("friend's name : %d\n",name);

// return 0;
// }


//Two enum names can have same value.

// enum friends 
// {   ram=12,
//     ravi,
//     raja=12,
//     ramesh
// };

// int main()
// {
//     enum friends name;

//     name = ram;
//     printf("friend's name : %d\n",name);

//     name = raja;
//     printf("friend's name : %d\n",name);

// return 0;
// }


// we can assign values to some name in any order. 
//all unassigned names get value as value of previous name plus one. 

// enum friends 
// {   ram=1,
//     ravi=6,
//     raja=10,
//     ramesh
// };

// int main()
// {
//     enum friends name;

//     name = ram;
//     printf("friend's name : %d\n",name);
//     name = raja;
//     printf("friend's name : %d\n",name);

// return 0;
// }

//The value assigned to enum names must be some integral constant, i.e., the value must be in range from minimum possible integer value to maximum possible integer value.
//all enum constants must be unique in their scope.

// enum enemy 
// {   raman,
//     rahul,
//     nitin,
//     ramesh
// };

// enum friends 
// {   ram,
//     ravi,
//     ramesh,
//     raja
   
// };

// int main()
// {
//     enum friends name;
//     enum enemy name1;

//     name = ram;
//     printf("friend's name : %d\n",name);
//     name1 = nitin;
//     printf("friend's name : %d\n",name1);

// return 0;
// }


//eg : 

// enum day {sunday = 3, tuesday, wednesday, thursday, friday, saturday};
 
// int main()
// {
//     enum day day = thursday;
//     printf("%d", day);
//     return 0;
// }


// enum State {WORKING = 0, FAILED, FREEZED};
// enum State currState = 1;
 
// enum State FindState() {
//     return currState;
// }
 
// int main() {
//    (FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");
//    return 0;
// }


// enum friends 
// {   ram=1,
//     ravi=6,
//     raja=10,
//     ramesh
// };

// int main()
// {
//     enum friends name=6;

//     name = 5;
//     printf("friend's name : %d\n",name);
//     //name = raja;
//     printf("friend's name : %d\n",name);

// return 0;
// }



// enum friends 
// {   ram=1,
//     ravi=6,
//     raja=10,
//     ramesh,
//     raj
// };

// int main()
// {
//     enum friends name;

//     name = 5;
//     printf("friend's name : %d\n",name);
//     name = raja;
//     printf("friend's name : %d\n",name);


// return 0;
// }



//size of enum variable

// enum friends 
// {   ram=1,
//     ravi=6,
//     raja=10,
//     ramesh,
//     raj
// };

// int main()
// {
//     enum friends name;

//     printf("friend's name : %d\n",sizeof(name));


// return 0;
// }
