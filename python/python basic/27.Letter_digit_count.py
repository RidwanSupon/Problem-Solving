



numOfWords = 0
numOfDigits = 0
numOfLetters = 0

n = input("Enter string & numbers: ")

for i in n:
    i = i.lower()
    if i>='a' and i<='z':
        numOfLetters=numOfLetters+1

    elif i>='0' and i<='9':
        numOfDigits = numOfDigits + 1
    
    elif i == ' ':
        numOfWords = numOfWords + 1


print("Number of words: ",numOfWords+1)
print("Number of letters: ",numOfLetters)
print("Number of digits: ",numOfDigits)