"""To swap the digits of a 2 digit number"""
n=int(input("Enter a two digit number only: "))
t=n%10
n=n//10
s=10*t+n
print("The new number is",s)