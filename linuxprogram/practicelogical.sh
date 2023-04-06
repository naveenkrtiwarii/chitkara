#!/bin/bash

read a b
if [ $a == true -o $b == true ]
then 
echo "true"
else
echo "false"
fi

if(( $a == true  || $b == true ))
then 
echo " a and b are true"
else
echo " either a or b is false"
fi


read -p "enter c " c
if(( !$c == true ))
then
echo "c was false "
else
echo "c was true "
fi
