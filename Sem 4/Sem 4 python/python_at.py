import math
print("using math.gcd() function")
m=int(input("enter first number: "))
n=int(input("enter second number: "))
print("GCD of given numbers is:- ",math.gcd(m,n))


print("using recursion")
m=int(input("enter first number: "))
n=int(input("enter second number: "))
def GCD(a,b):
    if(b==0):
        return a
    else:
        return GCD(b,a%b)
print("GCD of given numbers is:- ",GCD(m,n))


print("using euclidian algorithm")
m=int(input("enter first number: ")) 
n=int(input("enter second number: "))
def HCF(a,b):
    if(b==0):
        return a
    elif(a==0):
        return b
    elif(a==b):
        return b
    
    if(a>b):
        return HCF(a-b,b)
    else:
        return HCF(a,b-a)
print("GCD of given numbers is:- ",HCF(m,n))