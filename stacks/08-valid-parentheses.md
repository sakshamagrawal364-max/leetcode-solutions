## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used a stack to store opening brackets.
For every closing bracket, I checked whether it matched the most recent opening bracket. The string is valid if all brackets match and the stack is empty at the end.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
The solution was tested locally with one valid case and one invalid case before submitting to LeetCode.