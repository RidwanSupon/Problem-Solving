# 1 + 2 + 3 + ............+ n

n = int(input("enter the last number: "))
sum=0

for i in range(1,n+1,1):
    sum = sum+i
print(sum)