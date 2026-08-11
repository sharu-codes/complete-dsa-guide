# Given an array of arr[] positive integers where
# all numbers occur even number of times except one number
# which occurs odd number of times. Return that number.

class Solution:
    def getOddOccurrence(self, arr):
        # code here 
        freq = {}
        for i in arr:
            if i not in freq:
                freq[i] = 1
            else:
                freq[i] += 1
                
        for i in arr:
            if freq[i] % 2 != 0:
                return i
                