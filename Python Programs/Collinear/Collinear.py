"""To see whether 3 coordinates are collinear or not"""
x1=int(input("Enter the value of x coordinate of point 1: "))
y1=int(input("Enter the value of y coordinate of point 1: "))
x2=int(input("Enter the value of x coordinate of point 2: "))
y2=int(input("Enter the value of y coordinate of point 2: "))
x3=int(input("Enter the value of x coordinate of point 3: "))
y3=int(input("Enter the value of y coordinate of point 3: "))
m1 = (y2-y1)/(x2-x1)
m2 = (y3-y2)/(x3-x2)
if m1==m2:
    print("Points (",x1,",",y1,"), (",x2,",",y2,") and (",x3,",",y3,") are collinear")
else: print("Points (",x1,",",y1,"), (",x2,",",y2,") and (",x3,",",y3,") are NOT collinear")