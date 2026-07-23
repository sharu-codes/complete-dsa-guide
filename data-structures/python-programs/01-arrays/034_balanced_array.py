'''
Given an array arr[] of even size, find the minimum value that needs to be added to any one element so that the array becomes balanced.
An array is considered balanced when the sum of elements in the left half is equal to the sum of elements in the right half.

Examples :

Input: arr = [1, 5, 3, 2]
Output: 1
Explanation: Sum of first 2 elements is 1 + 5  = 6, Sum of last 2 elements is 3 + 2  = 5, To make the array balanced you can add 1.
'''

class Solution:
    def minValueToBalance(self, arr: list[int]) -> int:
        # code here
        sum_left, sum_right = 0, 0
        n = len(arr)
        for i in range(n//2):
            sum_left += arr[i]
            
        for i in range(n//2, n):
            sum_right += arr[i]
            
        return abs(sum_left - sum_right)
        