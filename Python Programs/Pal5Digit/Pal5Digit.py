"""To check if a five digit number is a palindrome or not"""
a=int(input("Enter a five digit number: "))
c=a
s=0
while (a!=0):
    s=s*10+(a%10)
    a=a//10
if s==c: print(c,"is a palindrome")
else: print(c,"is NOT a palindrome")