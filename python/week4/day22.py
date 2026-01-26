import requests

url = "https://jsonplaceholder.typicode.com/users"
res = requests.get(url)
if res.status_code == 200:
    users = res.json()

    for user in users:
        print("이름:",user["name"])
        print("이메일:",user["email"])
        print("-"*20)

        print("상태 코드:", res.status_code)
        print("헤더:", res.headers)
        print("URL:", res.url)

#res.json()[0]["name"] => text 처리 하면 에러난다

#핵심 요약

#GET 요청 → requests.get(url)

#응답 확인 → status_code

#텍스트 → res.text

#JSON → res.json()

#JSON 구조 = 리스트 + 딕셔너리