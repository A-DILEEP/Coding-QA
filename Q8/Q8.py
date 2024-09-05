first=input("Enter the first string : ")
second=input("Enter the second string : ")
third =input("Enter the third string : ")

firstString=list(first)
secondString=list(second)
for i in range(len(firstString)):
    if firstString[i] in 'aeiouAEIOU' :
        firstString[i]="%"
    else :
        continue

for i in range(len(secondString)):
    if secondString[i] in 'aeiouAEIOU':
        continue
    else:
        secondString[i]="#"

first=''.join(firstString)
second=''.join(secondString)
third=third.upper()

print(first+second+third)