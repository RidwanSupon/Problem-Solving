#!/bin/bash

isLeapYear(){
year=$1

if((year%4==0||year%400==0&&year%100!=0))
then
echo "Leap year"
else
echo "Not leap year"
fi
}

isLeapYear 2012
isLeapYear 2013
