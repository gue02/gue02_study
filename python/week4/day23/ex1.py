import requests

url = "https://jsonplaceholder.typicode.com/todos/1"

res = requests.get(url)
try: 
    if res.status_code == 200:
        user = res.json()
        print("Title: ",user["title"])
        print("Completed: ",user["completed"])
    else:
        print("요청 실패.",res.status_code)
except Exception as e:
    print("에러 발생 : ",e)