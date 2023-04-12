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



