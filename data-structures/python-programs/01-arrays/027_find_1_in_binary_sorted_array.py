# Given a sorted array arr consisting of 0s and 1s.
# The task is to find the index (0-based indexing) of the first 1 in the given array.

class Solution:
    def firstIndex(self, arr):
        # code here
        if 1 in arr:
            return arr.index(1)
        return -1
