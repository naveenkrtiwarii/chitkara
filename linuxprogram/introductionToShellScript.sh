#!/bin bash

#shell script - 
#A shell script is a computer program designed to be run by the Unix/Linux shell.
#Shell Scripting is a program to write a series of commands for the shell to execute.


#Shell -
#an interface between a user and an operating system service. 
#it takes input from you in the form of commands, processes it, and then gives an output.
#It is the interface through which a user works on the programs, commands, and scripts. 
#A shell is accessed by a terminal which runs it.

#types of shell -
#Bourne Shell
#C Shell
#Korn Shell
#GNU Bourne-Again Shell



# $ is called command prompt 
# $ - $ sign stands for a shell variable



# # - called hash , ! - called bang 
# #! - called shebang,  It passes instruction to program /bin/sh.



# comment - Any line starting with a hash (#) becomes comment.


# echo - uses for display on screen
#echo "hello world"

# printf - usses for display on screen
#printf "hello world\n"

# To determine Shell
#echo $SHELL

#setuid root spoofing
#a technique through which a user tries to grant unauthorized access on a system by pretending to be the root user. 

#prevention of spoofing
#add -- or - after #!/bin/bash. 
#it disables further option processing so that shell will not accept any options.

# #!/bin/bash -- or 
# #!/bin/bash -

#to run script
#step 1 - make file executable - chmod +x filename.sh or chmod 777 filename.sh
#step 2 - bash filename.sh or ./filename.sh


#Variables 
#holds values or name or filename etc
#variable is nothing more than a pointer to the actual data. 
#The shell enables you to create, assign, and delete variables.

#Variable naming
#name of a variable can contain only letters a to z or A to Z, numbers ( 0 to 9),underscore(-)
#by convention,variables will have their names in UPPERCASE.
# it should not contain speccial character eg - NAME_name!
#varibale name should not start with number. eg 9_NAME
#variable name can start with underscore(_)

#scalar variable
#variable can hold only one value at a time.
#NAME="Dhoni"
#echo $NAME


#accessing value of avriable
#value can be accssed with $ sign
#NAME="Dhoni"
#echo $NAME


#read only varibale
#a variable is marked read-only, its value cannot be changed.

#NAME="Raam"
#echo $NAME
#readonly NAME
#NAME="Ravi"

#deleting /unsetting variable
#Unsetting or deleting a variable directs the shell to remove the variable from the list of variables that it tracks. 
#Once you unset a variable, you cannot access the stored value in the variable.

#var1=10
#echo "before unset $var1"
#unset var1
#echo "after unset $var1" 

#unset command doesn't work with readonly variable

#var1=10
#echo "before unset $var1"
#readonly var1
#unset var1
#echo "after unset $var1" 






