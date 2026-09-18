\## Problem: Binary Search (Easy)



\*\*Link:\*\* https://leetcode.com/problems/binary-search/



\### Approach



I used binary search on the sorted array. Two pointers represent the current search range, and the middle element is checked to decide which half of the array should be searched next.



\### Complexity



\- Time: O(log n)

\- Space: O(1)



\### Notes



Test Case 1:

nums = {1, 3, 5, 7, 9}

target = 5

Expected = 2



Test Case 2:

nums = {1, 3, 5, 7, 9}

target = 6

Expected = -1



Both test cases were tested locally before submitting to LeetCode. The LeetCode solution was accepted.

