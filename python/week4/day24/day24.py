import requests

url = "https://jsonplaceholder.typicode.com/users"
res = requests.get(url)
users = res.json()
result = []

for user in users:
    info = {
        "name": user["name"],
        "email" : user["email"]
    }
    result.append(info)
print(result)

total_id = 0

for user in users:
    total_id += user["id"]
print("ID 합계: ", total_id)

for user in users:
    city = user["address"]["city"]
    print(user["name"], "-", city)