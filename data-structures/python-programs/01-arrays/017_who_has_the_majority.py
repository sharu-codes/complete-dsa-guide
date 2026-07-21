# Given an array arr[] and two elements x and y, return the element that occurs more frequently.
# If both elements have the same frequency, return the smaller one.

class Solution:
    def moreFrequent(self, arr, x, y):
        #code here
        freq = {}
        for num in arr:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1

        if x not in freq:
            freq[x] = 0
        if y not in freq:
            freq[y] = 0
        
        if freq[x] == freq[y]:
            return x if x < y else y
            
        return x if freq[x] > freq[y] else y
        