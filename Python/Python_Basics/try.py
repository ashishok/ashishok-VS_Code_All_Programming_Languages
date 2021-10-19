player2 = input('enter your name player-1')
player1 = input('enter your name player-2')

for a in range (5):    
    player1 = input("palyer1 turn --> choose from snkae(s),water(w),and gun(g)\n")
    if player1 == "s" or player1 == 'w' or player1 == "g" :
        print("write")
    else:
        print("invalid character by player1")
        continue

    player2 = input("player2 turn --> choose from snkae(s),water(w),and gun(g)\n")
    if player2 == "s" or player2 == 'w' or player2 == "g" :
        print("write")
    else:
        print("invalid character by player2")
        continue

    if player1 == player2 :
        print("draw")
    if player1 == 's' and player2 == 'w':
        print(player1 + 'won') 
    elif player1 == 's' and player2 == 'g':
        print('player2 won') 
    elif player1 == 'w' and player2 == 's':
        print('player2 won') 
    elif player1 == 'w' and player2 == 'g':
        print('player1 won') 
    elif player1 == 'g' and player2 == 's':
        print('player1 won') 
    elif player1 == 'g' and player2 == 'w':
        print('player2 won') 
print("good game")
print()