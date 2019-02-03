#!/bin/bash
# This script displays a message between 1 and 10 times accordingto the number
# specified by the user. It demonstrates how input can be collected from the user.
#
# source of script unknown
#
echo -n "Enter a number between 1 and 10 and press [ENTER]: "
read number
while [ $number -gt 0 ]
do
echo -n “You ARE wonderful!”
number=$[$number-1]
done
