#xargs
# xargs tuple er motoi kaj kore 

def student(*details):
    print(details)

student(1012,"Rakib","018710101")


def add(*numbers):
    sum = 0
    for num in numbers:
        sum = sum + num
    print(sum)

add(10,20,554)
add(2,3)


# xxargs

def student(**details):
    print(details["name"]) #name use kore only name dekha jabe , same id er jonno o 
    print(details)  # all details print korbe second bracket e . like dictionaries

student(id=103,name="hello")        #key value dictonary er moto kaj korbe