array=[2,42,7,4,6,10]
target=int(input("Enter the target value : "))

for i in range(0,len(array)):
    for j in range(1,len(array)):
        if array[i]+array[j]==target:
            print(f'{i} {j}')
        else :
            continue
