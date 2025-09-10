from typing import List

def selection_sort(arr:List[int])->None:
    n = len(arr)
    
    for i in range(n):
        min_index = i
        for j in range(i+1,n):
            if arr[j]< arr[min_index]:
                min_index = j
        
        if min_index!=i:
            arr[i], arr[min_index] = arr[min_index], arr[i]
            

if __name__ == "__main__":
    input_array = list(map(int,input("Enter numbers separated by spaces: ").split()))
    selection_sort(input_array)
    print("Sorted array:", input_array)
