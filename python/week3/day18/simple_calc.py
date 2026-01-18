try:
    a = int(input("first int : "))
    op = input("operator(+ - * /): ").strip
    b = int(input("second int : "))

    if op == "+":
        print(a + b)
    elif op == "-":
        print(a - b)
    elif op == "*":
        print(a * b)
    elif op == "/":
        if b == 0:
            print("0으로 나눌 수 없습니다.")
        else:
            print(a / b)
    else:
        print("지원하지 않는 연산자입니다.")
        
except ValueError:
    print("please input integer.")