def modifiedString(s):
    words=s.split()
    reversed_words=words[::-1]

    reversed_string=' '.join(reversed_words)
    return reversed_string

inputString=input("Enter the sentence : ")

reversed_string=modifiedString(inputString)

print(reversed_string)