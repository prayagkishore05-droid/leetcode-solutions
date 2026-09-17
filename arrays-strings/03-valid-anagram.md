\## Problem: Valid Anagram (Easy)



\*\*Link:\*\* https://leetcode.com/problems/valid-anagram/



\### Approach



I used a frequency-counting array to compare the characters in both strings. Each character in the first string increases its count, while each character in the second string decreases its count. If all counts become zero, the two strings are anagrams.



\### Complexity



\- Time: O(n)

\- Space: O(1)



\### Notes



Test Case 1:

s = "anagram"

t = "nagaram"

Expected = true



Test Case 2:

s = "rat"

t = "car"

Expected = false



Both test cases were tested locally before submitting to LeetCode. The LeetCode solution was accepted.

