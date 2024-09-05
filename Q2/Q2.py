sizeOfArray=int(input("Enter the size : "))
array=[]
for i in range(0,sizeOfArray):
    a=int(input())
    array.append(a)
newArray=set(array)

print(f'so the most values after removing duplicates is : {len(newArray)}')