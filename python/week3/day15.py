word_count = {}

try:
    with open("python\\week3\\text.txt", "r", encoding="utf-8") as f:
        for line in f:
            line = line.lower().strip()
            words = line.split()

            for word in words:
                if word in word_count:
                    word_count[word] += 1
                else:
                    word_count[word] = 1

except FileNotFoundError:
    print("text.txt 파일이 없습니다.")

else:
    for word, count in word_count.items():
        print(word, ":", count)
