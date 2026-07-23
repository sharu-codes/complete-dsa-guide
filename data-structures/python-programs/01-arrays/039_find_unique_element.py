'''
Given an array of elements occurring in multiples of k,
except one element which doesn't occur in multiple of k.
Return the unique element.

Examples:

Input: k = 3, arr[] = [6, 2, 5, 2, 2, 6, 6]
Output: 5
Explanation: Every element appears 3 times except 5.
Input: k = 4, arr[] = [2, 2, 2, 10, 2]
Output: 10
Explanation: Every element appears 4 times except 10.

'''

class Solution:
    def find_unique(self, k, arr):
        #code here
        freq = {}
        for num in arr:
            freq[num] = freq.get(num, 0) + 1
        
        for num in arr:
            if freq[num] == 1:
                return num