"""To calculate the rotations per minute of each wheel of a moving train at 300 kmph"""
import math
r=float(input("Enter radius of the wheel in cm: "))
s=float(input("Enter the speed of the train in km/h: "))
p=2*math.pi*(r/100)
print("Circumference of each wheel in m is",p)
rpm=(s*1000)/(p*60)
print("The no. of rotations per minute is",rpm)