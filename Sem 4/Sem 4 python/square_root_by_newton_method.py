print('Kanchan Choudhary-2100320100085')
def square_root(no,epsilon=1e-6):
    guess=no/2
    while abs(guess*guess-no)>epsilon:
        guess=(guess+no/guess)/2
    return guess
no=float(input('Enter a number:'))
result=square_root(no)
print(result)