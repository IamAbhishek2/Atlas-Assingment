#!/bin/bash


case $2 in 

	+) res=$(($1 + $3))
		;;
	-) res=$(($1 - $3))
		;;
	/) res=$(($1 / $3))
		;;
	%) res=$(($1 % $3))
		;;
	mul) res=$(($1 * $3))
		;;
	*) echo "Wrong Syntax"
		exit
		;;

esac

echo "$1 $2 $3 = $res"
