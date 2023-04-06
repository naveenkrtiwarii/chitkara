#!/bin/bash

read a b

# !- logical negation
# invert the condition

if(( ! $a == "true" )) 
then 
echo "a was false now true"
else
echo "a was true now false"
fi

# logical AND   && or -a

if(( $a == "true" & $b == "true" ))
then 
echo " a and b are true"
else
echo " a and b are not true"
fi

if(($a == "true" || $b == "true" ))
then 
echo "a  $a and b $b "
else
echo " a $a and b $b "
fi



