# #1 - Multiples of 3 and 5

## Problem

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below the parameter n.

## Approach

### Trivial
Iterate over every number from 1 to n and sum up the ones which are congruent 0 modulo 3 or 5.

### Mathematical
If we list the first elements to be summed up, it is possible to recognize a pattern.  
3, 5, 6, 9, 10, 12, 15, 18, 20, 21, 24, 25, 27, 30  
These elements can be grouped based on the rest classes they belong to.  
[3]: {3, 6, 9, 12, 15, 18, 21, 24, 27, 30}  
[5]: {5, 10, 15, 20, 25, 30}  
It is apparent that the elements of both sets constitute an arithmetic series, with a common difference of 3 and 5 respectively. It would be tempting to evaluate their sums and to add these sums and return it as the result, however then the overlapping elements would be ignored. It can be also observed that the overlapping elements are all members of the restclass [15].  
[15]: {15, 30}
Hence, the final result can be obtained as follows:  
S[3] + S[5] - S[15]  
, where S[X] denotes the sum of n elements with
