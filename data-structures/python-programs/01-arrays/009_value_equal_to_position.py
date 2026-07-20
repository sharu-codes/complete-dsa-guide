# Given an array arr[]. Find the elements whose value is equal to the position where they appear.

class Solution:
    def valEqualToPos(self, arr):
        return_arr = []
        # code here
        for i in range(len(arr)):
            if arr[i] == i+1:
                return_arr.append(arr[i])
        
        return return_arr
        