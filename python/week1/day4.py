sentence = "python is hard!"

words = sentence.strip().split()
print("word :", len(words))

if "python" in sentence.lower():
    print("python")