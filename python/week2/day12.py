result = {}

with open("python\week2\data.txt", "r", encoding="utf-8") as f:
    for line in f:
        name, value = line.split()
        value = int(value)

        if name in result:
            result[name] += value
        else:
            result[name] = value

for name, total in result.items():
    print(name, ":", total)

with open("python\week2\ result.txt","w",encoding="utf-8") as f:
    for name, total in result.items():
        f.write(f"{name} {total}\n")