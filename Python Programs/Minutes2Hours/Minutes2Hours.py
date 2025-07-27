"""To convert amount of minutes entered by the user to days, hours and minutes"""
e=int(input("Enter the number of minutes: "))
d=e//1440
d1=e%1440
hr=d1//60
m=d1%60
print(e,"minutes is",d,"days,",hr,"hours and",m,"minutes")