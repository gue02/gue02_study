sentence = "apple banana apple orange banana apple"
words = sentence.split()

count_dict = {}

for word in words:
    if word in count_dict:
        count_dict[word] += 1
    else:
        count_dict[word] = 1

print(count_dict)

for word, count in count_dict.items():
    print(word, ":", count)

nums = [1,2,3,4,5,6,7]

result = {
    "even" : 0,
    "odd" : 0
}

for n in nums :
    if n % 2 == 0:
        result["even"] += 1
    else :
        result["odd"] += 1

print(result)