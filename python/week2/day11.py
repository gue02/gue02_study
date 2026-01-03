scores = {}

with open("python\week2\score.txt","r", encoding="utf-8") as f:
    for line in f:
        name, score = line.split()
        scores[name] = int(score)

print(scores)

with open("python\week2\output.txt","w",encoding="utf-8") as f:
    for name, score in scores.items():
        f.write(f"{name} {score}\n")