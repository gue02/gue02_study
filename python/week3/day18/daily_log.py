from datetime import datetime

text = input("오늘 한 일 한 줄 입력: ").strip()
today = datetime.now().strftime("%Y-%m-%d")

try:
    with open("python\\week3\\day18\\daily_log.txt","a",encoding="utf-8") as f:
        f.write(f"{today} - {text}\n")
        print("저장 완료! {daily_log.txt}")
except Exception as e:
    print("저장 실패:",e)