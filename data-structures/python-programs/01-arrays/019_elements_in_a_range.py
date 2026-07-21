# Given an array arr[] containing distinct positive integers,
# and two integers start and end defining a range.
# Determine if the array contains all elements within inclusive range [start, end].

class Solution:
    def checkElements(self, start, end, arr):
        # code here
        flag = True
        for i in range (start, end + 1):
            if i not in arr:
                flag = False
                break
        
        return flag