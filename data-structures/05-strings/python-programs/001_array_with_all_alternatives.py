# Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.

# Input: arr[] = [111, 222, 333, 444, 555]
# Output: true
# Explanation:
# arr[0] = 111, which is a palindrome number.
# arr[1] = 222, which is a palindrome number.
# arr[2] = 333, which is a palindrome number.
# arr[3] = 444, which is a palindrome number.
# arr[4] = 555, which is a palindrome number.
# As all numbers are palindrome so This will return true.

# Converting it into a String

class Solution:
    def isPalinArray(self, arr):
        # code here
        for num in arr:
            if str(num) != str(num)[::-1]:
                return False
        return True