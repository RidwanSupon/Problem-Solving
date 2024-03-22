#1+2+3+............+n

n = int(input("Enter the last number: "))

sum = 0

for x in range(1,n+1,1):
    sum = sum+x
print("1+2+3+.....+n. Sum: ",sum)


# 1 * 2 * 3 * .............* n

mul=1
for x in range(1,n+1,1):
    mul = mul * x
print("1*2*3*...........*n. Multiplication: ",mul)


# 1 + 3 + 5 + ............. + n

sum=0

for x in range(1,n+1,2):
    sum = sum+x
print("1+3+5+ ......... +n :",sum)