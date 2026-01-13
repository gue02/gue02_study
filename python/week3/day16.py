even_numbers = []
total = 0
max_val = None

with open("python\\week3\\numbers.txt", "r", encoding="utf-8") as f:
    for line in f:
        num = int(line.strip())

        if num % 2 == 0:
            even_numbers.append(num)
            total += num

            if max_val is None or num > max_val:
                max_val = num

print("Even numbers:", even_numbers)
print("Sum:", total)
print("Max:", max_val)
