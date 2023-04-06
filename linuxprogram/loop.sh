#!/bin/bash

#loop 
#enables you to execute a set of commands repeatedly

#types
# while
# for
# until

# while loop syntax
#   while [condition]
#   do
#      task
#    done
: '
a=1
while [ $a -le 10 ]
do
 echo $a 
 a=$((a+1))
done
'
#nested while loop
# loop containg another loop inside
: '
a=1
while [ $a -le 10 ]
do
   b=1
   while [ $b -le $a ]
   do
    printf "*"
    b=`expr $b + 1`
    done
printf "\n"
 a=$((a+1))
 done
'
#infine while loop
: '
while :
do
echo "infine while loop"
done

while true
do 
echo "infine while loop"
done
'
#for loop sysntax
: '
 for varname in list
 do
    task
done
'
: '
for i in 1 2 3 4 5 6 7 8 9 10
do
    echo $((2*$i))
done
'
: '
range="1 2 3 4 5 6 7 8 9 10"
for i in $range
do
    echo $i
done
'

: '
for (( i=5; i<=100; i++ ))
do
 echo $((5*$i))
done
'

: '
for (( i=1; i<=100; i++))
do
    if [ `expr $i % 2` -eq 0 ]
    then
        echo $i
    fi
done
'

name='Group 21 ke honhar shandar khushhaal bachche'

for name in $name
do
  echo $name 
done

#write data in a file


