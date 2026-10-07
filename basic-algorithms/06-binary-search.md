## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used two pointers, left and right, to define the search range.
The middle element is checked each time, and the search range is reduced by half until the target is found or the range becomes empty.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
The solution was tested locally with one case where the target exists and one case where the target does not exist before submitting to LeetCode.