subjects = ["C","C++","Java","python"]
print(len(subjects)) # length func
subjects.append("TOC")  #add in last
subjects.insert(2,"OS") #add in selected index
subjects.remove("C")    #remove func
print(subjects)
subjects.sort()
print(subjects)

#sort reverse
numbers=[20,201,3,57,61,21,3]
numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)

#copy subjects element
subjects2=subjects.copy()
print(subjects)

#3 kon index e ache ota find korbe
pos = numbers.index(3)
print(pos)
cou=numbers.count(3)    #how many times 3 exist
print(cou)