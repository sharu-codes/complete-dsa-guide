# You are given an array arr[] consisting of positive integers. Return the maximum of every adjacent pairs in the array.

class Solution:
    def maxAdj(self, arr):
        # code here
        for i in range(1, len(arr)):
            arr[i-1] = max(arr[i-1], arr[i])
        
        arr.pop()    
        return arr
        
        