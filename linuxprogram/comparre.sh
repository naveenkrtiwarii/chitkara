#!/bin/bash

read a 
read b

if [ $a -eq $b ]
then 
printf "a is equal to b\n"
elif [ $a -gt $b ]
then
printf "a is greater than b \n"
else
printf " b is greater than a\n"
fi