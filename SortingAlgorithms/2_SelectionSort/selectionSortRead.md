### Selection Sort Algorithm explanation:

- Selection Sort sorts numbers in passes by identifying the smallest number in each pass and putting it in the right place.
- To sort *'n'* numbers using Selection Sort, the starting index of each pass is stored in the *'minimum index'*
- The value at *'minimum index'* is compared with the next positional values iteratively and if a value is smaller than the value at *'minimum index'*, then the smaller value position becomes the new *'minimum index'*
- At the end of the each pass if *'minimum index'* changes from the position assigned at the start of that pass, then the values at the starting index and new *'minimum index'* are swapped in-place
- Time complexity : O(n^2)
    - *Two for loops where each iterate n times leading to n x n computations*
- Space Complexity: O(1)
    - *Swapping happens inplace*
- It is **unstable** as the relative position of two equal values will be changed in this algorithm