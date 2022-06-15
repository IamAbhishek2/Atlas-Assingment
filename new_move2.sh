#!/bin/bash

echo "Programme to change the name of the Directory"

echo "Enter the name which you want"

read new_name

stat=/home/abhishek/Desktop/captain/Banner

echo "Enter the name of the file which you want to change"

read stat 

if [ -e $stat ]
then
	echo " We can change the name of the file "
	mv $stat $new_name
	echo " Yipee !! name is changed "
else 	
	echo "The file does not exist"

fi

echo "Happy!! to solve this"




