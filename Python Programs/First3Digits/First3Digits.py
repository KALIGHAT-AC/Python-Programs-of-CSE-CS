"""To print the first 3 digits of a number entered by the user"""
import sys
a=int(input("Enter a 3 digit or more digit number: "))
d=0
b=str(a)
while a!=0:
    a//=10
    d=d+1
if d<3:
    print("You didnt enter a 3 digit number. Try again")
    sys.exit(0)
b1=int(b[0])
b2=int(b[1])
b3=int(b[2])
print("The sum of the first 3 digits of the number is ",b1+b2+b3)