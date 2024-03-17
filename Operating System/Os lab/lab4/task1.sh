#!/bin/bash

read -p "Enter a fruit name:  " fruit

case $fruit in
"apple")
echo "it's a common fruit"
;;
"orange")
echo "It's a citrus fruit"
;;
"banana")
echo "it's a yellow fruit"
;;
*)
echo "Uknown fruit"
;;
esac
