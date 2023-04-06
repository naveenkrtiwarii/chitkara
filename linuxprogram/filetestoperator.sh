#!/bin/bash

#File Test Operator:
#operators are used to test a particular property of a file.


# -d
# This operator checks if the given directory exists or not. 
#If it exists then operators returns true otherwise false.

#pwd 
ls 
: '
read -p "enter dir name " dir
if [ -d $dir ]
then
echo "$dir exits"
else
echo "$dir does not exist"
fi
'
# -e
#This operator checks whether the given file exists or not. 
#If it exits this operator returns true otherwise false.
: '
read -p "enter file name " filename
if [ -e $filename ]
then
echo " $filename exists"
else
echo " $filename does not exist"
fi
'
# -r 
#This operator checks whether the given file has read access or not. 
#If it has read access then it returns true otherwise false.
read filename
if [ -r $filename ]
then
echo " $filename has read access"
else
echo " $filename does not have read access"
fi
: '
# -w
# This operator check whether the given file has write access or not. 
#If it has write then it returns true otherwise false.


if [ -w $filename ]
then
echo " $filename has write access"
else
echo " $filename does not have write access"
fi

# -x
#This operator check whether the given file has execute access or not. 
#If it has execute access then it returns true otherwise false.


if [ -x $filename ]
then
echo " $filename has exe access"
else
echo " $filename does not have exe access"
fi

# -s
#This operator checks the size of the given file. 
#If the size of given file is greater than 0 then it returns true otherwise it is false.

if [ -s $filename ]
then
echo " $filename has exe access"
else
echo " $filename does not have exe access"
fi

'