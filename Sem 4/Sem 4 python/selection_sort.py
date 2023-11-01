def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr
user_list=input("enter the elements:").split()
list=[int(num) for num in user_list]
sorted_numbers = selection_sort(list)
print("Sorted numbers:", sorted_numbers)