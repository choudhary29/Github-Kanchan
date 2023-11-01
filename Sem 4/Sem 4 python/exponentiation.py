print('Kanchan Choudhary-2100320100085')
def exponentiation(base,exponent):
    result=1
    for _ in range(exponent):
        result*=base
    return result
base=float(input('Enter the base no:'))
exponent=int(input('Enter the exponent no:'))
result=exponentiation(base,exponent)
print(result)