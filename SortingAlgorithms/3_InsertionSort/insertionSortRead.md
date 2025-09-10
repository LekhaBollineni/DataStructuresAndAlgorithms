### Insertion Sort Algorithm explanation:

- Insertion Sort sorts numbers by inserting a number at it's right place in every iteration i.e building a sorted list one number at a time
- In insertion sort, we either move a number to left or keep it in it's place.
- If a number is smaller than the number to it's left, then move it left. Keep moving it to the left until it's in it's right place.
- Consider *'n'* numbers that need to be sorted using insertion sort
- The first number is already sorted. So, we start from the second number
- The number that is currently being determined if it should be moved to left or not is stored in a variable say *'key'*
- In every iteration *'i'*, if we came across a *'key'* that is smaller than the *'i-1'th* number then we start moving left. 
- So we take a variable *'j'* and make it *'i-1'*
- When the *'key'* is compared to a number a position *'j'*; if the *'key'* is smaller, then the bigger number is moved to *'j+1'th* position, leaving the *'j'th* position for *'key'*
- And to keep moving left *'j'* is decremented utmost until we reach the start.
- If the *'key'* is greater than the number on it's left, then it reached it's right place and key becomes the *'j+1'th* number.

#### Note: *'key'* is actual number whereas *'i'*, *'j'* are positions
