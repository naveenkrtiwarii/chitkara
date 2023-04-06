#!/bin/bash

#day=7

printf "enter day "
read day

if [ $day == 1 ]
then 
    echo "sunaday"
elif [ $day == 2 ]
then 
    echo "monday"

elif [ $day == 3 ]
then 
    echo "tuesday"
elif [ $day == 4 ]
then 
    echo "wednesday"

elif [ $day == 5 ]
then 
    echo "thursady"
elif [ $day == 6 ]
then 
    echo "friday"

elif [ $day == 7 ]
then 
    echo "saturday"
else 
    echo "Bhai kya enter kar rha hain?"
fi
    