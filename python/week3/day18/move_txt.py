import os
import shutil

folder = input("정리할 폴더 경로 입력: ").strip()
target = os.path.join(folder, "TXT")

try:
    if not os.path.isdir(folder):
        print("not folder.")
    else:
        os.makedirs(target, exist_ok=True)

        count = 0
        for name in os.listdir(folder):
            path = os.path.join(folder,name)
            if os.path.isfile(path) and name.lower().endswith(".txt"):
                shutil.move(path,os.path.join(target, name))
                count += 1
            print("move txt file count : ", count)
            print("result folder: ", target)
except Exception as e:
    print("error: ", e)