# Given an array arr[] of integers,
# check whether there exist three elements such that the sum of two elements is equal to the third element. 

class Solution:
    def findTriplet(self, arr):
        # code here 

        n = len(arr)

        for i in range(n):
            for j in range(i + 1, n):
                if arr[i] + arr[j] in arr:
                    return True

        return False