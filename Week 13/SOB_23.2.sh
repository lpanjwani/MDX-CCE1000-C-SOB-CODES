#!/bin/bash
# This script clears the terminal, displays a greeting and information about current
# processes. It then sets and displays two variables.


clear

echo “The script starts now.”
echo

echo “Hi, $USER!”
echo

echo “Here is a list of your processes:”
echo
ps –l
echo

echo “I’m now setting two variables.”
COLOUR=”black”
VALUE=”9”
echo “This is a string: $COLOUR”
echo “This is a number: $VALUE
echo

echo “Returning you to the command promptnow.”
