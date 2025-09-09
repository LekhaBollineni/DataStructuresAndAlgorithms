### Bubble Sort Algorithm explanation:
- Bubble sort takes 'n' numbers that needs be sorted and sorts them in passes
- In each pass, two elements at a time inorder are compared and swapped if first number is greater than the second
- We track if swapping occured with a boolen variable say 'swapped'
- Initialize 'swapped' to False and if swapping occurs change it to True
- At the end of each pass the largest element of the pass reaches end
- So for a pass 'k', you are only need to compare 'n-k' elements as 'k-1' that are largest for their coreesponding passes will have reached the correct position
- We end the sorting when 'swapped' remains False after a pass
- Time Complexity : O(n^2)
- Space Complexity: O(n)