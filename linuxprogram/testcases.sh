#!/bin/bash

#animal="rat"
#read animal

#case "$animal" in
#      "rat") echo "rat is small animal"
#      ;;
#      "dog") echo "dog barks"
#      ;;
#     "bunny") echo "i love bunny"
#      ;;
#esac


#calculator


printf "enter operator : "
read op
printf " enter a and b : "
read a b

case "$op" in
      "add") echo `expr $a + $b`
      ;;
      "sub") echo `expr $a - $b`
      ;;
       "mul") echo `expr $a \* $b`
      ;;
      "div") echo `expr $a / $b`
      ;;
       "mod") echo `expr $a % $b`
      ;;
esac 





