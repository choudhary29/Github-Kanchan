def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i 
    return -1 
user_list=input("enter the elements:").split()
list=[int(num) for num in user_list]
target_number = int(input("Enter the no."))
result = linear_search(list, target_number) 
if result != -1:
    print(f"The target element {target_number} is found at index {result}.")
else:
    print("The target element is not found in the list.")