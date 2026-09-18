\## Problem: Move Zeroes (Easy)



\*\*Link:\*\* https://leetcode.com/problems/move-zeroes/



\### Approach



I used a two-step approach. First, I moved all non-zero elements to the beginning of the array while maintaining their original order. Then, I filled the remaining positions with zeros.



\### Complexity



\- Time: O(n)

\- Space: O(1)



\### Notes



Test Case 1:

nums = {0, 1, 0, 3, 12}

Expected = \[1, 3, 12, 0, 0]



Test Case 2:

nums = {0, 0, 0}

Expected = \[0, 0, 0]



Both test cases were tested locally before submitting to LeetCode. The LeetCode solution was accepted.

