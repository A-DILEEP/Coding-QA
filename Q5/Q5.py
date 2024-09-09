n=int(input())
arr=[]
for i in range (0,n):
    d=int(input())
    arr.append(d)

profit=0

for i in range (1,n):
    if arr[i]>arr[i-1]:
        profit=profit+(arr[i]-arr[i-1])
    
print(profit)