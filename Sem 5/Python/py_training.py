# name="kanchan"
# print("Hello World")
# age=19
# print(name)
# print(age)
# name="palak"
# age=19
# is_adult=False
# print(name)
# print(age)
# first_name="Tony"
# last_name="Stark"
# age=51
# is_genius = True
# print(first_name+" "+ last_name)
# print(age)
# print(is_genius)
#print("Tony's age is"<age>"years old")#ye meri glti h
# name=input("what is your name?")
# print("my name is "+name)
# name=input("what is your superhero name?")
# print("my super hero name is "+name)
#old_age=input("enter your old age:")
#new_age=int(old_age)+2
#print(new_age)
# number=18
# print(float(number))
# first=input("enter first number: ")
# second=input("enter second number: ")
# sum=int(first)+int(second)
# print("sum of first and second number is: "+ str(sum)) 
# name="kanchan choudhary"
# print(name.upper())
# print(name.lower())
# print(name.find('cho'))
# print(name.replace("kanchan choudhary","choudhary kanchan"))
# print('kanchan' in name)
#print(5+2)
#print(5-2)
#print(5*2)
#print(5**2)
#print(5/2)
#print(5//2)
#print(5%2)
# print(3!=2)
# print(3>2 or 2>3)
# print(1>0 and 2<3)
# print(not 3>2)
# age=1
# if age>=18:
#     print("you are an adult")
# elif age<18 and age>3:
#     print("you are in school")    
# else:
#     print("you are a kid")    
# print("thank you") 
#######################simple loop  
#out#####################1 2 3 4 5 6 7 8 9 10 
# i=1
# while i<=10:
#     print(i)
#     i=i+1
#out#####################triangle
# i=1
# while i<=5:
#     print(i * "*")
#     i=i+1
#out#####################reversed triangle 
# i=5
# while i>=0:
#     print(i*"*")
#     i=i-1
######################for loop
#out###################1 2 3 4 5
# for i in range(5):
#     print(i+1)
######################lists[]
# #out######################97
# marks=[95,96,97]
# print(marks[2])
#out####################96
# marks=[95,96,97]
# print(marks[-2])
#out##################[95, 96]
# marks=[95,96,97]
# print(marks[0:2])
#out###################95 96 97
# marks=[95,96,97]
# for score in marks:
#     print(score)
######################append
#out##############[95, 96, 97, 99]
# marks=[95,96,97]
# marks.append(99)
# print(marks)
###################insert
#out#####################[95, 99, 96, 97]
# marks=[95,96,97]
# marks.insert(1,99)
# print(marks)
######################exist
#out###############false
# marks=[95,96,97]
# marks.insert(1,99)
# print(93 in marks)
##################length
#out###############4
# marks=[95,96,97]
# marks.insert(1,99)
# print(len(marks))
###################using while loop
#out################95 96 97
# marks=[95,96,97]
# i=0
# while i<len(marks):
#     print(marks[i])
#     i=i+1
######################clear
#out##############95 96 97 []
# marks=[95,96,97]
# i=0
# while i<len(marks):
#     print(marks[i])
#     i=i+1
# marks.clear()
# print(marks)
###################break
#out############ram sita lakshman hanuman
# students=["ram","sita","lakshman","hanuman","radha","krishna"]
# for student in students:
#     if student=="radha":
#         break
#     print(student)
######################continue
#out###############ram sita lakshman hanuman radha krishna
# students=["ram","sita","lakshman","kc","hanuman","radha","krishna"]
# for student in students:
#     if student=="kc":
#         continue
#     print(student)
###########################tuple()
################### tuples are immutable i.e., we can't change anything or we can't edit tuples
##perenthesis() are not compulsory in tuple
#out###############3 2
# marks=(95,96,97,97,97)
# print(marks.count(97))
# print(marks.index(97))
##########################set{}
##only unique values are stored in set
#out############{96, 97, 95}
# marks={95,96,97,97,97}
# print(marks)
##index doesn't matter in set
##hence sets are known as unordered
#out############TypeError: 'set' object is not subscriptable
# marks={95,96,97,97,97}
# print(marks[0])
############
#out##############96 97 95
# marks={95,96,97,97,97}
# for score in marks:
#     print(score)

# range(-1,-5,1)
# range(-1,-5,-1)

# for i in range(3,15,2):
#     print(i)
    


# # first=int (input())
# # second=int (input())
# n1,n2=map(int,input().split())
# for i in range(n1,n2,2):
#     print (i, end=(" "))
    
    
# first=int(input())
# second=input()
# mylist=list(map(int,input().split()))
# for i in mylist:
#     print(i,end=second)



# n=input()
# separator=input()
# inarr=input().split()
# print(*inarr,sep=separator)


# n1,n2=map(int,input().split())
# for i in range(n1,n2,-2):
#     print (i, end=(""))


# n1,n2=map(int,input().split())
# for i in range(n1,n2,3):
#     print (i, end=("*"))



# mylist=[1,2,3,4]
# # mylist.append(8)
# # mylist.insert(4,8)
# mylist.extend([8])
# print(mylist)


# n1=int(input())
# mylist=list()
# for i in range(n1):
#     num=int(input())
#     mylist.append(num)
# print(sum(mylist),max(mylist),min(mylist))



# n1,n2=map(int,input().split())
# mylist=list()
# for i in range(n1):
#     mylist=list(map(int,input().split()))
#     print(sum(mylist),max(mylist),min(mylist))
    
    
    
# n1=int(input())
# mylist=list()
# for i in range(n1):
#     mylist=list(map(int,input().split()))
#     print(max(mylist),min(mylist),sum(mylist),sum(mylist)/2)



# n1=int(input())
# for _ in range(n1):
#     nums=int(input())
#     marks=list(map(int,input().split()))
#     print(max(marks),min(marks),sum(marks),round(sum(marks)/nums,2))




# n1=int(input())
# for i in range(n1):
#     num=int(input())
#     str=input()
#     if(str=="int"):
#         mylist=list(map(int,input().split()))
#         print(sum(mylist))
#     else:
#         mylist=list(input().split())
#         print(len(max(mylist)))


# n=int(input())
# for i in range(n):
#     p,instr1=input().split()
#     if(instr1=='int'):
#         list1=list(map(int,input().split()))
#         print(sum(list1))
#     else:
        
        
# R=int (input("enter the number of rows: "))
# C=int (input("enter the number of columns: "))
# matrix=[]
# print("enter the entries rowwise: ")
# for i in range(R):
#     a=[]
#     for j in range(C):
#         a.append(int(input()))
#     matrix.append(a)
# for i in range(R):
#     for j in range(C):
#         print(matrix[i][j],end=" ")
#     print()
    
    
    
# n,m=map(int,input().split())
# mat=[]
# for _ in range(n):
#     row=list(map(int,input().split()))
#     mat.append(row)
# res=[]
# for i in range(n):
#     res.extend(mat[i])
# print(*res)

# n,m=map(int,input().split())
# mat=[]
# for _ in range(n):
#     row=list(map(int,input().split()))
#     mat.append(row)
# res=[]
# for i in range(n):
#     res.extend(mat[i])
# print(*res) 
# ans=0
# avg=0
# for i in range(n):
#     sum(mat[i])
#     ans=ans+sum(mat[i])
#     avg=ans/(n*m)
# print(format(avg,".2f"))


# for i in range(3):
#     count=0
#     for j in range(i,3):
#         count+=1
#     print(count)

# count=0
# for i in range(3):
#     for j in range(i,3):
#         count+=1
#     print(count)

# append: [1,2,3,[4,5]]
# extend: [1,2,3,4,5]
    
# matrix=[]
# for i in range(3):
#     temp=[]
#     for j in range(4):
#         temp.append(j)
#     matrix.append(temp)
# print(matrix)

# n,m=map(int,input().split())
# l1=list(map(int,input().split()))
# l2=list(map(int,input().split()))
# mat=[]
# for i in l2:
#     count=0
#     for j in l1:
#         if(j>i):
#             count+=1
#     mat.append(count)
# print(*mat)

# upar wale ka input
# 5 7
# 2 6 1 3 9
# 5 1 8 7 0 4 12

# n,m=map(int,input().split())
# s1=input()
# s2=input()
# # l1=[*s1]
# # l2=[*s2]
# mat=[]
# for i in range(len(s1)):
#     count=0
#     for j in range((len(s2))):
#         if(s1[i]==s2[j]):
#             count+=1
#     mat.append(count)
# print(*mat)

# upar wale ka input
# 19 24
# The quick brown fox
# jumps over the lazy dogs


# n,m=map(int,input().split())
# ans=[]
# main=[]
# for i in range(n):
#     temp=[]
#     temp=input().split()
#     for j in temp:
#         ans.append(len(j))
# main.append(ans)
# print(*main)
# #################################
# n,m=map(int,input().split())
# matrix=[]
# for i in range(n):
#     row=input().split()
#     matrix.append(row)
# lenrow=[]
# for i in range(n):
#     temp=[]
#     for j in range(m):
#         temp.append(len(matrix[i][j]))
#     lenrow.append(temp)
# for i in range(n):
#     print(*lenrow[i])


# 3 4
# quick brown fox jumps
# alpha beta gamma zeta
# quick brown alpha beta


# n,m=map(int,input().split())
# matrix=[]
# for i in range(n):
#     temp=list(map(int,input().split()))
#     matrix.append(temp)
# for temp in matrix:
#     print(temp[0]+ temp[m-1], sum(temp))
    
# upar wale ka input
# 3 4
# 11 12 13 14
# 2 3 4 5
# 6 7 8 9


# n=int(input())
# s1=input().split()
# for i in range(len(s1)):
#     print(s1[i][0],s1[i][-1])
    
# upar wale ka input
# 4 
# quick brown fox jumps

# ord: ascii value deta hai
# chr: characer ke  liye

# n=int(input())
# s1=input()
# print(max(s1),ord(max(s1)))

# upar wale ka input
# 3        
# alpha beta gamma

# slicing of sequence:
#seq[start:end:step]
#default[0,-1,1]
#mylist=[1,2,3,4,8,9,'ram']
#[2:5]=[3,4,8]
#[:6:2]=[1,3,8]
#[:5]=[1,2,3,4,8]
#[2:]=[3,4,8,9,'ram']
#[::-1]=['ram',9,8,4,3,2,1]

# string='healthy wealthy and wise'
# [3:6]=lth
# [3:]=lthy wealthy and wise
# [:6]=health
# [6:-3]=y wealthy and w

# python allow jump slicing by using step parameter

# rightRotStr=inStr[len(inStr)-val:]+inStr[:len(inStr)-val]               positive indexing
# rightRotStr=inStr[-val:]+inStr[:-val]                                   negative indexing

# leftRotStr=inStr[val:]+inStr[:val]

# intval=64
# binval=bin(intval)[2:]
# print(binval)
# # # [2:]

# binval='1000000'
# decval=int(binval,2)
# print(decval)

# sort method
# seq.sort(reverse=False/True)
# true=descending
# false=ascending
# precedence of capital letters is higher than small letters


# abs(-56)
# ans==56
# abs function discard negative values