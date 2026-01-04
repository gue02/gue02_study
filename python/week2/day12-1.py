result = {}
with open("python\week2\data.txt","r",encoding="utf-8") as f:
    for line in f:
        name,value = line.split()
        value = int(value)

        if name in result:
            result[name] += value
        else:
            result[name] = value

with open("python\week2\ filtered.txt","w", encoding="utf-8") as f:
    for name, total in result.items():
        if total > 5:
            f.write(f"{name} {total}\n")