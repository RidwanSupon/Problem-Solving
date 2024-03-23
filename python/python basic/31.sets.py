# unorder collection of items
#duplicate value allowed na. thakleo ekbar show korbe shudu


num1 = {1,2,3,4,5,6,7}
print(num1)

num2 = set([4,5,6])
num2.add(7)
print(num2)
num2.remove(4)
print(4 not in num2)
print(4 in num2)


#union
print(num1 | num2)

#intersection
print(num1 & num2)

#difference
print(num1 - num2)
