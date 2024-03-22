import random
guessNumber = int(input("Enter a guess number: "))

randomNumber = random.randint(1,5)


if guessNumber == randomNumber:
    print("Correct guess")
else:
    print("Incorrect guess")
    print("random number was",randomNumber)