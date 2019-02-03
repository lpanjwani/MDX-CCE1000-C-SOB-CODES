#!/bin/bash


if [ -d "$1" ]; then
	cd "$1"
	echo "Directory Exists"
else
	mkdir  "$1"
	echo "Directory Created"
fi



if(("$2">0 && "$2"<=20)); then
	echo "Second Parameter is inside the range"
else
	echo "Second Parameter is outside the range"
fi


if(("$3">0 && "$3"<=20)); then
	echo "Third Parameter is inside the range"
else 
	echo "Third Parameter is outside the range"
fi


for (( a=1,b=1; a<="$2"&&b<="$3"; a++,b++ ))
do
	cd "$1"
	mkdir "$a"
	cd "$a"
	touch "$b"
done

