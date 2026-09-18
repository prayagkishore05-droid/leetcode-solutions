\## Problem: Valid Parentheses (Easy)



\*\*Link:\*\* https://leetcode.com/problems/valid-parentheses/



\### Approach



I used a stack to keep track of opening brackets. Whenever a closing bracket is found, I compare it with the most recent opening bracket. If they match, the opening bracket is removed from the stack. The string is valid only when all brackets are correctly matched and the stack is empty at the end.



\### Complexity



\- Time: O(n)

\- Space: O(n)



\### Notes



Test Case 1:

s = "()\[]{}"

Expected = Valid



Test Case 2:

s = "(]"

Expected = Invalid



Both test cases were tested locally before submitting to LeetCode. The LeetCode solution was accepted.

