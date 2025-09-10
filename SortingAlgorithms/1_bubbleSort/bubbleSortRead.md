### Bubble Sort Algorithm explanation:

- Bubble sort sorts numbers by swapping the neighbors until all numbers are sorted.
- Bubble sort takes *'n'* numbers that needs be sorted and sorts them in passes
- In each pass, two numbers that are neighbors are compared and swapped *if first number is greater than the second*
- We track if swapping occured with a boolen variable say *'swapped'*
- Initialize *'swapped'* to **False** for each pass and if swapping occurs, change it to **True**
- At the end of each pass, the largest element of the pass reaches the end
- So for a pass *'k'*, you only need to compare *'n-k'* numbers as *'k-1'* numbers that are largest in their corresponding passes will have reached the end in the right order
- We end the sorting when 'swapped' remains **False** after a pass
- Time Complexity : O(n^2) 
    - *Two for loops where each iterate n times in the worst case leading to n x n computations*
- Space Complexity: O(n)
    - *Swapping happens inplace*