Author: LMB
-----------------------------Requirements-----------------------------------
Your submission will support
 - algorithmic-related programming,
 - command-line processing support, and
 - file-based input and output.
----------------------------------Problem Statement-------------------------
Hash Table Organization: A lexicon of (English character) words. Do the programming related to the
building of a Hash Table that can maintain arbitrarily long strings in C, C++, or Java. It is similar to that also
used by Google around 1997-1998. The implementation should be optimized enough for a test execution to
take no more than few seconds, maximum 5 seconds.

Lexicon L uses a Hash Table T structure along with an Array A of NUL separated words. In
our case words are going to be English character words only (upper-case or lower case). Table T will
be organized as a hash-table using collision-resolution by open-addressing as specified in class. You are
going to use quadratic probing for h(k; i) and keep the choice of the quadratic function simple: i2 so that
h(k; i) = (h0(k)+i2) mod N. The keys that you will hash are going to be English words. Thus function h0(k)
is also going to be kept simple: the sum of the ASCII/Unicode values of the characters minus 4 mod N,
where N is the number of slots of T. Thus ’alex’ (the string is between the quotation marks) is mapped to
97+108+101+120􀀀4 mod N whatever N is. In the example below, for N = 11, h(alex;0) = 4. Table
T however won’t store key k in it. This is because the keys are of arbitrary length. Instead, T will store
pointers/references in the form of an index to another array A. The second table, array A will be a character
array and will store the words maintained in T separated by NUL values \0. This is not 2 characters, a
backslash followed by a zero. It is 1B (ASCII), 2B (UNICODE) whose all bits are set to 0, the NUL value.


To perform operations use:

Insert - 10
Deletion - 11
Search - 12
Print - 13
Create - 14
Comment - 15

Deletion: Deleted characters are converted to * in string Array A when the deletion method is called not while printing

Errors: In case of overflow, code seems to be stuck in a loop for insert

----------------------Required output-----------------------

% java prplexicon1234 filearbitrary.txt
% ./prp123 file.txt
14 11
10 alex
10 tom
10 jerry
15 ready-to-print
13


T 		A: alex\tom\jerry\
0:
1:
2: 5
3: 9
4: 0
5:
6:
7:
8:
9:
10: