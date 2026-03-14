count  = int(input ("Input int : "))
delete = 0
space = 0
for i in range(1,count+1):
    num = count - delete
    space = delete -1
    if i == 1:
        print("*" * num)
    else:
        print(" " * space,"*" * num)
    delete += 1
