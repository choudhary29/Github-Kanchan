def binary_search(list, item):
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = (low + high) 
        if list[mid] == item:
            return mid
        elif list[mid] < item:
            low = mid + 1
        else: 
            high = mid - 1
    return -1
user_list=input("enter the elements in ascending order:").split()
list=[int(num) for num in user_list]
item = int(input("Enter the number you want to search: "))
index = binary_search(list, item)
if index != -1:
    print("The number is found at index", index)
else:
    print("The number is not found in the list")