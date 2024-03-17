#!/bin/bash
read year
if ((year % 4 == 0 || year % 400 == 0 && year % 100 != 0))
then
echo "$year is Leap year"
else
echo "$year is Not leap year"
fi

