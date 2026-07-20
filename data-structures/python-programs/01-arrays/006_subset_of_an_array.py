# Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

class Solution:
    #Function to check if a is a subset of b.
    def isSubset(self, a, b):
        # Your code here
        
        freq = {}
        
        for num in a:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
                
                
        for num in b:
            if num not in freq or freq[num] == 0:
                return False
            freq[num] -= 1
        return True