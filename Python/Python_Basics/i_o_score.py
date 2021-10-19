def game():
    return 84

score = game()
with open("score.txt") as f:
    highscore = int(f.read())

if highscore <score:
    with open("score.txt","w")as f:
        f.write(str(score))



