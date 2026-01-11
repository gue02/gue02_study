import random

while(1) :
    answer = random.randint(1,3)

    mine = int(input("1~3 input: "))
    if mine > 3 or mine < 0 :
        print("wrong int. retry it.")
    elif mine == answer :
        print("draw.")
    elif mine == 3 and answer == 1:
        print("lose. answer is", answer)
    elif mine == 1 and answer == 3:
        print("you win! answer is", answer) 
    elif mine > answer :
        print("you win! answer is", answer)
    elif answer > mine :
        print("lose. answer is", answer)
    