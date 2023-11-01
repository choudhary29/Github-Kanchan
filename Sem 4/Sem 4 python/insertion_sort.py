def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr
user_list=input("enter the elements:").split()
list=[int(num) for num in user_list]
sorted_numbers = insertion_sort(list)
print("Sorted numbers:", sorted_numbers)