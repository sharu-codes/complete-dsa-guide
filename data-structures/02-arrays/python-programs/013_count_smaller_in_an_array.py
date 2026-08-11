# Given an unsorted array arr[]. Find the count of elements less than or equal to the given element x.

class Solution:
    def countOfElements(self, x, arr):
        count = 0
        # code here
        for i in arr:
            if i <= x:
                count += 1
        return count