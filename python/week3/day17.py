nums = {3,4,8,9}
words = {"word","python"}
evens = []
for n in nums:
    if n % 2 == 0:
        evens.append(n)

evens = []
for n in nums:
    if n % 2 == 0:
        evens.append(n)

count = {}

for word in words:
    if word in count:
        count[word] += 1
    else:
        count[word] = 1
