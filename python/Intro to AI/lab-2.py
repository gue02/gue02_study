start = int(input("Enter the start day (0-6) >> "))
days = int(input("Enter the number of days (28-31) >> "))
count = 0
week = 0
print("Sun Mon Tue Wed Thu Fri Sat")

if(start == 0):
    print("  1   2   3   4   5   6   7")
    count = 7
elif(start == 1):
    print("      1   2   3   4   5   6")
    count = 6
elif(start == 2):
    print("          1   2   3   4   5")
    count = 5
elif(start == 3):
    print("              1   2   3   4")
    count = 4
elif(start == 4):
    print("                  1   2   3")
    count = 3
elif(start == 5):
    print("                      1   2")
    count = 2
elif(start == 6):
    print("                          1")
    count = 1
while(count < days):
    if week == 7:
        print("")
        week = 0
    if count < 9 :
        print(f"  {count+1}", end = " ")
        count += 1
        week += 1
    else :
        print(f" {count+1}", end = " ")
        count += 1
        week += 1