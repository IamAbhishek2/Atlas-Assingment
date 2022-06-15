#!/bin/bash

res=$(( $1 + $2 + $3 + $4 + $5 + $6 + $7 + $8 + $9 ))

if [ ${10} -gt 10 ]
then
	echo "Here is the sum:$sum = $((${10} + $res))"
else
	echo "Cannot add less then 10 hence result=$res"
fi

echo "Ended, Phew!!!"

