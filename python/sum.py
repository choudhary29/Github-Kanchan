from re import A


a=3
b=5

print('five times of a is',5*a)
print(a/b)
list1=["Manasvi", 'kansal', 19, 48.5,"Data science"]
print(list1)
print(list1[1])
print(list1[-1],list1[4])
list1[0]='meenal'
print(list1)
list1.append(69)
print(list1)
print(len(list1))
print(list1.pop(4))
lista=[5]*4
print(lista)
list1[1]=[10,20,30]
print(list1)
tuple1=('Manasvi',19)
tuple1[0]='meenal'
print(tuple1)
#tuple cant change the elemnet
listnew=list[tuple1]
listnew[0]='meenal'
tuple2=tuple(listnew)
print(tuple2)