# Given an array arr[].
# Your task is to find the minimum and maximum elements in the array.

class Solution:
    def getMinMax(self, arr):
        # code here
        arr.sort()
        return arr[0], arr[-1]
        