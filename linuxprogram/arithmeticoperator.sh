#!/bin/bash

#addition
read -p 'enter a and b' a b

c=`expr $a + $b`
echo "sum : $c"
#or 
c=$(( $a + $b))
echo "sum : $c"
#NOTE `` is called backtick

#subtraction
c=`expr $a - $b`
echo "subtraction : $c"

c=$(($a - $b))
echo "subtraction : $c"

#multiplication
c=`expr $a \* $b`
echo "mul : $c"

c=$(($a * $b))
echo "mul : $c"

#division
c=`expr $a / $b`
echo "div : $c"

c=$(($a / $b))
echo "div : $c"

#modulus
c=`expr $a % $b`
echo "mod : $c"

c=$(($a % $b))
echo "mod : $c"
