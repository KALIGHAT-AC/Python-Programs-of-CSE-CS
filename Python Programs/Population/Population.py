"""To calculate the ratio of population after Y years to original population"""
N=int(input("Enter original population of the area: "))
Y=int(input("Enter the number of years: "))
S=N*(1.01**Y)
print("The new population is",S," people")
R=S/N
print("The ratio of population after Y years to original population is",R)