#!/bin/bash

#age=17

echo "enter your age "
read age

if [ $age -ge 18 ];
then 
 echo "can vote"
else
    echo "cannot vote"
fi