#!/bin/bash


echo "Programme for deletion of all Sub File of Size 0"

echo "Check for the number of files that has Size 0"

stat= find . -type f -size 0c

echo "We are going to Delete the file with Size 0"

if [ -z $stat ]

then
	echo "We have file with Size 0"
	find $stat -size 0
	echo "Files are deleted"
	find $stat -size 0 -delete
else	
	echo "No file is available"
fi

echo "Yess!!!"
