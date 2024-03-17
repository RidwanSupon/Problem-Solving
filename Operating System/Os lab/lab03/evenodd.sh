echo "Enter a num"
read num

if((num%2==0))
then
res=$((num*2))
echo "$res"
else
res=$((num*3))
echo "$res"
fi
