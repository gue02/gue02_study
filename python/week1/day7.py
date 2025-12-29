def question1 ():
    '''
    문제 설명 :
    좌표들이 튜플(tuple) 형태로 저장된 리스트가 있다.
    points = [(2, 3), (5, 1), (1, 4), (2, 2)]
    각 튜플은 (x, y) 좌표를 의미한다.

    1. x 좌표가 2인 점들만 골라서 새로운 리스트를 만들어라
    2. 그 점들의 y 좌표 합을 구하라
    3. (x, y) 튜플의 값은 절대 변경하지 말 것
    4. 결과를 아래 형식으로 출력하라
    '''
    points = [(2, 3), (5, 1), (1, 4), (2, 2)]
    Fpoints = []
    Ysum = 0

    for x,y in points :
        if x == 2 :
            Ysum += y
            Fpoints.append((x,y))

    print("Filtered points :",Fpoints)
    print("Y sum : ",Ysum)

def question2 ():
    '''
    문제 설명
    여러 개의 주문 정보가 튜플(tuple) 형태로 저장되어 있다.
    orders = [
        ("apple", 3, 1000),
        ("banana", 2, 500),
        ("orange", 5, 700),
        ("apple", 1, 1000)
    ]
    각 튜플은 다음 의미를 가진다:
    (상품명, 수량, 단가)
    
    1. 상품명이 "apple"인 주문만 골라서 리스트에 저장하라
    2. 해당 주문들의 총 금액(수량 > 단가)의 합을 구하라
    3. 튜플의 값은 절대 변경하지 말 것
    4. 결과를 아래 형식으로 출력하라
    '''
    orders = [("apple", 3, 1000), ("banana", 2, 500), ("orange", 5, 700), ("apple", 1, 1000)]
    apples_list = []
    total_price = 0

    for fruit,total,price in orders :
        if fruit == "apple":
            total_price += price * total
            apples_list.append((fruit,total,price))

    print("Apple orders : ",apples_list)
    print("Total price : ",total_price)
