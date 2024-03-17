#!/bin/bash

isPrime(){
num=$1
if((num<2))
then
echo "not prime"
fi

for((i=2;i<=num/2;i++))
do
if((num%2==0))
then
echo "Not a prime number"
return
else
echo "Prime number"
return
fi
done
}
isPrime 5
