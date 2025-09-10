from typing import List

def insertion_sort(arr:List[int])->None:
    
    n = len(arr)
    
    for i in range(1,n):
        key = arr[i]
        j = i-1
        
        while j>=0 and arr[j] > key:
            arr[j+1]=arr[j]
            j-=1
                
        arr[j+1]=key
        print(f"Pass {i}: ", arr)
    
if __name__ == "__main__":
        input_array = list(map(int,input("Enter numbers separated by spaces: ").split()))
        insertion_sort(input_array)
        print("Sorted array:", input_array)
            