## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I started with the first string as the common prefix.
Then I compared it with each remaining string and shortened the prefix whenever characters did not match.

### Complexity
- Time: O(n × m)
- Space: O(m)

### Notes
The solution was tested locally with a normal case and a no-common-prefix edge case before submitting to LeetCode.