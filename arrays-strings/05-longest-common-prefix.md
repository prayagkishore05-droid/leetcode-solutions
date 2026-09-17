\## Problem: Longest Common Prefix (Easy)



\*\*Link:\*\* https://leetcode.com/problems/longest-common-prefix/



\### Approach



I compared the characters at the same position across all strings. The comparison stops when the characters differ or when the end of any string is reached.



\### Complexity



\- Time: O(n × m)

\- Space: O(1)



\### Notes



Test Case 1:

Input = {"flower", "flow", "flight"}

Expected = "fl"



Test Case 2:

Input = {"dog", "racecar", "car"}

Expected = ""



Both test cases were tested locally before submitting to LeetCode. The LeetCode solution was accepted.

