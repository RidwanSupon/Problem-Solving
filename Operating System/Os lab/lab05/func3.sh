#!/bin/bash

isPalindrome(){
input=$1

length=${#input}
reversed=""
for((i=length-1;i>=0;i--))
do
reversed="$reversed${input:$i:1}"
done
if [ "$input" == "$reversed" ];
then
echo "palindrom $input"
else
echo "not a palindrome"
fi
}
isPalindrome "aca"
