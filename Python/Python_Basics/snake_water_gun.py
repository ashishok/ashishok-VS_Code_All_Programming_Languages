from math import trunc
import random

def game(a,b):
    if computer == you :
        print('draw')
    elif computer == 's':  
        if you == 'w':
            return False
        elif you == 'g':
            return True
    elif computer == 'w':  
        if you == 'g':
            return False
        elif you == 's':
            return True
    elif computer == 'g':  
        if you == 's':
            return False
        elif you == 'w':
            return True
   

print('computer turn : snake(s),water(w),gun(g)\n')
rand = random.randint(1,3)
if rand == 1:
    computer = 's'
elif rand == 2:
    computer = 'w'
elif rand == 3:
    computer = 'g'


you = input("Your Turn : snake(s),water(w),gun(g)\n")
a =game(computer,you)
print(f'coputer choose {computer}')
print(f'you choose {you}')
if a:
    print('you won')
else:
    print("computer won")