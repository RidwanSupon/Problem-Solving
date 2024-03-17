#!/bin/bash
read year
if ((year % 4 != 0 ))
then
temp= $year % 4
echo $temp
#elif ((temp == 3))
#leap=$year+1
##echo "nearest leap year is: $leap"

fi

