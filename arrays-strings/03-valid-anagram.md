## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a frequency array of size 26 to count the characters.
For each character, I increased the count for the first string and decreased it for the second string. If all counts are zero, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The solution was tested locally with one valid anagram and one non-anagram case before submitting to LeetCode.