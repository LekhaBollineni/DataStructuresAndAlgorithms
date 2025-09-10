# Data Structures and Algorithms

- To understand why DSA is important for programming it is important to understand that every action that we perform on a computer, however small it may be is a series of computations.
- For humans, number of steps involved in a compution such as 1+1 = 2 is 1 but for a computer it varies as it needs to convert every value, operand into bytes, send the instructions to CPU, store the result in memory etc; which involves multiple low-level computations
- If you're adding 1 + 1, efficiency doesn’t matter much, but what if you're
    - Searching through millions of records?
    - Handling real-time transactions?
    - Serving data to millions of users?
- You need efficient algorithms and data structures that can help you organize data based on your needs

#### Tip: To understand a DSA concept with simple explanations, go to chat gpt or AI chatbot of your choice and type prompt starting with "Teach me like I am 5 ....". You can follow up with a concept of your choice.


### Time Complexity and Space Complexity:
- Time Complexity and Space Complexity are two concepts in DSA
- Understanding those concepts clearly will help you in easily determining if an algorithm is efficient

- **Time Complexity** refers to how fast an algorithm runs depending on the input size 'n'.
    - Instead of counting exact seconds, we count the number of operations.
    - To determine the time complexity, you need to identify the real computations that are core to problem solving as opposed to auxiliary computations that can be ignored
    - Typically the low-level operations such as byte conversions, CPU cycles etc; are auxiliary operations.
    - In an algorithm, actions such as simple assignments that are performed outside of the core problem solving can be considered auxiliary operations too
    - Typically traversing through a list or any data structure of size 'n' in a loop or a nested loop etc; gives you real computations
    - We determine the worst case time complexity and denote it using  big O notation i.e. O()
    - As we are generalizing with size n, based on the computations complexities are written as O(n), O(n^2), O(nlogn) etc;
    - Lower time complexity means faster execution for large inputs.
    - O(1) <= O(n) <= O(nlogn) <= O(n^2); O(1) is the most efficient 

- **Space Complexity** refers to how much extra memory an algorithm needs apart from the input.
    - Lower space complexity means less memory usage



- This repository contains Sorting Algorithms , each with it's working python code and explanation of the algorithm in it's respective folder.
