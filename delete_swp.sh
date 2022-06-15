#!/bin/bash

echo "Programme for deletion of SWP file"

stat=/home/abhishek/Desktop


if test -e $stat
then 
	echo "Found some files for deletion"
	find $stat -name "*.swp" -delete

	echo "Your Swp file is deleted"

else
	echo "Your File is not found"

fi

echo "Hey!! We solved it"


