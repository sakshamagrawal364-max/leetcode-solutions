## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I kept track of the minimum stock price seen so far.
For each day, I calculated the possible profit and updated the maximum profit when a better result was found.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The solution was tested locally with a normal case and a decreasing-price edge case before submitting to LeetCode.