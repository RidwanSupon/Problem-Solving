#!/bin/bash

read -p "Enter a year: " year

Preyear=$(( (year / 4) * 4 ))
Afteryear=$(( ((year + 3) / 4) * 4 ))
if (( year - Preyear <= Afteryear - year ));
 then
    leapyear=$Preyear
else
    leapyear=$Afteryear
fi
echo "The nearest leap is: $leapyear."

