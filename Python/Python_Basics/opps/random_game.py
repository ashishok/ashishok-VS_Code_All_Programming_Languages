import random
randomNumber = random.randint(1, 100)
# print(randomNumber)
guesses = 1

userguess = None
while(userguess != randomNumber):
    userguess = int(input("enter your guess \n-->  "))

    if (userguess == randomNumber):
        print("you gussed it right in " + str(guesses) + ' count')
    else:
        if userguess > randomNumber:
            print("lower number please")
            guesses = guesses + 1
        elif userguess < randomNumber:
            print("Higer number please")
            guesses = guesses + 1
