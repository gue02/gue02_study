import requests

url = "https://jsonplaceholder.typicode.com/users"
res = requests.get(url)

if res.status_code == 200:
    users = res.json()

    with open("users.txt", "w", encoding="utf-8") as f:
        for u in users:
            f.write(u["name"] + "\n")

    print("파일 저장 완료")
