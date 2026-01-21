arr = [1,2,3,4,5]
even=odd=0

for i in arr:
    if i % 2 == 0:
        even += 1
    else:
        odd += 1
        
print("even: ", even, "odd: ", odd)
        