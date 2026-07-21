# Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

class Solution:
    def countOddEven(self, arr):
        #Code here
        oddCount, evenCount = 0, 0
        for i in arr:
            if i % 2:
                oddCount += 1
            else:
                evenCount += 1
        return oddCount, evenCount