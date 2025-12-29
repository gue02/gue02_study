'''문제 설명
정수로 이루어진 리스트가 주어진다.
리스트에 들어있는 짝수만 골라서 새로운 리스트를 만들어라
짝수들의 합과 최댓값을 출력하라
짝수가 하나도 없으면 "짝수가 없습니다"를 출력하라'''

nums = [3, 10, 7, 6, 1, 8, 9]
evens = []
sum = 0
max_even = None
for i in nums:
    if i % 2 == 0:
        evens.append(i)
        sum += i
        if max_even is None or i > max_even:
            max_even = i

print(f"Even list: {evens}")
print(f"Sum: {sum}")
print(f"Max Value: {max_even}")