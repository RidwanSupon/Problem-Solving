echo "enter num1"
read num1
echo "enter num2"
read num2

add=$((num1+num2))
sub=$((num1-num2))
mul=$((num1*num2))
div=$((num1/num2))

if ((num2==0))
then
echo "Addition is: $add"
echo "Substraction is: $sub"
echo "Multiplication is: $mul"
echo "division is undefined"

else
echo "Addition is: $add"
echo "Substraction is: $sub"
echo "Multiplication is: $mul"
echo "division is: $div"
fi

