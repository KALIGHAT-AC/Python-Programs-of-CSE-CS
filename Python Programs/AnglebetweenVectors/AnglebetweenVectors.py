"""To find the angle between two vectors entered by the user"""
import math
x1=int(input("Enter the value of x1: "))
y1=int(input("Enter the value of y1: "))
z1=int(input("Enter the value of z1: "))
x2=int(input("Enter the value of x2: "))
y2=int(input("Enter the value of y2: "))
z2=int(input("Enter the value of z2: "))
sp = (x1*x2)+(y1*y2)+(z1*z2)
m1=(x1**2)+(y1**2)+(z1**2)
m2=(x2**2)+(y2**2)+(z2**2)
mod1=m1**0.5
mod2=m2**0.5
print("The scalar product is",sp)
print("Modulus of vector A is",mod1)
print("Modulus of vector B is",mod2)
ang=math.degrees(math.acos(sp/(mod1*mod2)))
print("The angle between the vectors is",ang,"degrees")