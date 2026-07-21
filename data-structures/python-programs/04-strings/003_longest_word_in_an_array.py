# Given an array arr[] containing strings of names.
# Your task is to return the longest string.
# If there are multiple names of the longest size, return the first occurring name.

class Solution:
    def longest(self, arr):
        # code here
    
        longest_word = ''
        
        for word in arr:
            if len(word) > len(longest_word):
                longest_word = word
                
        return longest_word
        