try:
    a = int(input())
    b = int(input())
    print(a/b)
except ValueError:
    print("not a interger.")
except ZeroDivisionError:
    print("You can not divide 0")
else:
    print("a = ", a)
    print("b = ", b)
finally:
    print("exit program.")

result = {}
try:
    with open("python\week2\data.txt","r",encoding="utf-8") as f:
        for line in f:
            name, value = line.split()
            value = int(value)
            if name in result:
                result[name] += value
            else:
                result[name] = value
except FileNotFoundError:
    print("not exist file.")
except ValueError:
    print("File value error")
else:
    print("Result : ", result)
finally:
    print("Turn off program.")