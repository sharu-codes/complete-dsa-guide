# You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).

class Solution:
    def getAlternates(self, arr):
        return_arr = []
        # Code Here
        for i in range (0, len(arr), 2):
            return_arr.append(arr[i])
            
        return return_arr
        