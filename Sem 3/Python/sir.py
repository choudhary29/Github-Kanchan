# st="abes.ac.in"
# print(st.endswith('in'))
# # ###################################
# st="abes.ac.in"
# print(st.startswith('ab'))
# ##########################################################
# st="i like what you like"
# n=st.find('like')
# print(n)
# ##########################################################
# st="i like PYTHON"
# stnew=st.lower()
# print(stnew)
# ########################################
# st="i like python"
# stnew=st.upper()
# print(stnew)
# ################################
# st="i like python"
# stnew=st.title()
# print(stnew)
# ################################
# st="i like python"
# stnew=st.replace('python','cpp')
# print(stnew)
# ###########################
# st="i like python"
# stnew=st.split()
# print(stnew)
# ##########################
# st="sun,mon,tue"
# stnew=st.split(',')
# print(stnew)
# ##############################
# st="i like python"
# stnew='-'.join(st)
# print(stnew)
# ################################
# st="              i like python"
# stnew=st.strip()#to remove widespaces b4 the string (leading)or after the string(trailing)
# print(stnew)
########################3
#isalnum: return true if the string is alphanumeric(a-z,A-Z,0-9) 
#will return false if contains special character
# st="python3000"
# print(st.isalnum())
# ###
# st=" python3000"
# print(st.isalnum())
#########################################
#isalpha:returns true if str contains alphabets only
# st="python"
# print(st.isalpha())
# #
# st="python3000"
# print(st.isalpha())
############################################333
#isdecimal: return true if all chars in the str are decimals
# st="3000"
# print(st.isdecimal())
#######################################
#islower:return true if all chars in the string areb lower case
# st="python"
# print(st.islower())
#########################################
#len(): return length of a str. this is generic function.
# st="python3000"
# print(len(st))
######################################
# st1='go'
# st2='ing'
# print(st1+st2)
# ###################################
# st="python\t"
# print(st*5)
####################################
# st="i like python"
# print('python' in st)
# #
# st="i like python"
# print('java' in st)
# #
# st="i like python"
# print('python' not in st)
##################################
#\newline:ignores newline
# st="i like 'python'\
#     i like cpp"
# print(st)
# ############################
# st='https:\\\\\\\\\\abes.ac.in'
# print(st)
# ############################
#\' if we need to use single quotes in our string
# st='good morning! mr. \'BOB\''
# print(st)
###########################good morning! mr. bob! #
# print("good {}! mr. {}! ".format('morning','bob') )
# ############################
# bob and ram play football
# # ram and bob play football
# print ("{0} and {1} play football".format('bob','ram'))
# print ("{1} and {0} play football".format('bob','ram'))
###################################### bob and ram play football
# print ("{fname} and {sname} play football".format(fname='bob',sname='ram'))
###############################in binary 1010
# val=10
# print("in binary {0:b}".format(4))
################################in octal 12
# val=10
# print("in octal {0:o}".format(val))
#################################
########################in hexadecimal a
########################in hexadecimal A
# val=10
# print("in hexadecimal {0:x}".format(val))
# print("in hexadecimal {0:X}".format(val))
###############################in decimal 10
# val=10
# print("in decimal {0:d}".format(val))
##############################
# ####################in float10.893400
#####################two decimal point 10.89
# val=10.8934
# print("in float{0:f}".format(val))
# print("two decimal point {0:.2f}".format(val))
##############################sum of 10 and 20=30
# a=10
# b=20
# c=a+b
# print(f"sum of {a} and {b}={c}")
################################question
################################hello how  re you 
# line="hello how are you"
# L=line.split('a')
# for i in L:
#     print(i,end=' ')
##################################que
##################################Number of Digit is 6
##################################Number of Alphabets is 4
# alpha,string=0,"kc123456kc"
# for i in string:
# 	if (i.isalpha()):
# 		alpha+=1
# print("Number of Digit is", len(string)-alpha)
# print("Number of Alphabets is", alpha)
##############################################que
######################################abcing
######################################kc
######################################stringly
# st=input("input the string")
# if len(st)>=3:
#     if st.endswith('ing'):
#         print(st+'ly')
#     else:
#         print(st+'ing')
# else:
#     print(st)
#########################################
########################################tuple
#################################<class 'int'>
#################################<class 'str'>
#################################<class 'tuple'>
a=(12)``````````````````
b=('ABES')
c=('college',)
print(type(a))
print(type(b))
print(type(c))

