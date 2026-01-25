import requests

url = "https://example.com"

try:
    res = requests.get(url)

    if res.status_code == 200:
        print("요청 성공")
        print(res.text)
    else:
        print("요청 실패 : ",res.status_code)
except Exception as e:
    print("에러 발생 : ", e)