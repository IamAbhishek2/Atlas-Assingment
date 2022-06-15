#!/bin/bash

echo "Programme to change the name of the File in any Directory"

echo "Enter the name which you want"

read new_name

stat= find . -type f -size +20c

echo "Enter the name of the file which you want to change"

read data 

if [ -e $stat ] 
then
	echo " We can change the name of the file "
	 mv $data $new_name
	echo " Yipee !! name is changed "
else 	
	echo "The file does not exist"

fi

echo "Happy!! to solve this"




