"""To calculate the area of circle and rectangle"""
import math

rad = float(input("Enter the radius of a circle: "))
l = float(input("Enter the length of a rectangle: "))
b = float(input("Enter the breadth of a rectangle: "))
areac = math.pi * rad ** 2
print("Area of circle = ", areac)
arear = l*b
print("Area of rectangle = ", arear)
