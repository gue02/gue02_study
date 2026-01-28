import json
import requests
with open("python\\week4\\day23\\users.json", "r", encoding="utf-8") as f:
    data = json.load(f)

print(data)
print(data["apple"])

url = "https://jsonplaceholder.typicode.com/todos/1"
data = requests.get(url).json()

print("Title : ", data["title"])
print("Completed : ",data["completed"])