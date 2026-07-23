'''
Given an array arr of positive integers, return the minimum possible product of any k elements from the array.
Return the result modulo 1e9 + 7.

Examples:

Input: arr[] = [1, 2, 3, 4, 5], k = 2
Output: 2
Explanation: We will get the minimum product after multiplying 1 and 2 that is 2. So, the answer is 2.
Input: arr[] = [9, 10, 8], k = 3
Output: 720
Explanation: We have to multiply all the numbers.

'''

class Solution:
        
    def minProduct(self, arr, k): 
        # code here 
        MOD = 10 ** 9 + 7
        if k > len(arr):
            k = len(arr)
        arr.sort()
        minProduct = 1
        for i in range(k):
            minProduct *= arr[i]
            
        return minProduct % MOD
    
    