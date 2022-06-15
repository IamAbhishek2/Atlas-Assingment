#!/bin/bash

echo "Compare larger integer value from command line arguement"

if [ $1 -gt $2 ]
then
	echo "$1 is greater then $2"
else
	echo "$2 is greater"
fi

echo "Comparison ends here !!!"

