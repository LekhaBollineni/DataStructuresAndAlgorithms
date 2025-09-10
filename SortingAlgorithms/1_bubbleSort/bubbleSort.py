def bubble_sort(arr) -> None:
    n = len(arr)
      
    for i in range(n):
        swapped = False 
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        print(swapped,"\n")
        if not swapped:
            break

if __name__ == "__main__":
    input_array = list(map(int, input("Enter numbers separated by spaces: ").split()))
    bubble_sort(input_array)
    print("Sorted array:", input_array)