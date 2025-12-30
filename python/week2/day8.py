stock = {"apple" : 10, "banana" : 3, "orange" : 0, "grape" : 7}
total_count = 0
available_stock = {}
for name, count in stock.items():
    if count >= 5 :
        total_count += count
        available_stock.update({name : count})

print("Available stock: ",available_stock)
print("Total count: ", total_count)