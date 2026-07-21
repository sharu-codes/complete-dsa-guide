# Given an array arr[], the task is to find whether the arr is palindrome or not.
# If the arr is palindrome then return true else return false.

class Solution:
    def isPalindrome(self, arr):
        # code here
        return arr == arr[::-1]
        
