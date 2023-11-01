print('Kanchan Choudhary-2100320100085')
def is_prime(num):
    if num<2:
        return False
    for i in range(2,int(num**0.5)+1):
        if num%i==0:
            return False
    return True
numbers=[]
num_count=int(input('Enter the number of elements in list:'))
for i in range(num_count):
    num=int(input(f'Enter element {i+1}:'))
    numbers.append(num)
maximum=max(numbers)
prime_nums=[num for num in numbers if is_prime(num)]
print(f'maximum number in the list is:{maximum}')
print(f'prime numbers in the list are')
for prime in prime_nums:
    print(prime)