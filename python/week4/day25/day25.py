import requests

url = "https://jsonplaceholder.typicode.com/users"
res = requests.get(url)

users = res.json()
for user in users:
    if user["address"]["city"] == "South Christy":
        print(user["name"])