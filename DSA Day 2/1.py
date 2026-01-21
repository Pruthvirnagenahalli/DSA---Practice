# Finding Largest number in DSA

arr = [10, 20, 5, 30, 80]

largest = arr[0]   # initialize with first element

for i in arr:
    if i > largest:
        largest = i

print("Largest:", largest)