#!/bin/bash
read n
a=0
b=1
for ((i=1; i<=n; i++))
do
echo -n "$a "
temp=$((a+b))
a=$b
b=$temp 
done
