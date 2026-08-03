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

class Solution:
    def isPalinArray(self, arr):
        # code here
        count = 0
        for i in range(len(arr)):
            if self.isPalindrome (arr[i]):
                count += 1
                
        return (count == len(arr))
         
    def isPalindrome (self, num):
        rev = 0
        temp = num
        while (temp > 0):
            rem = temp % 10
            rev = rev*10 + rem
            temp //= 10
            
        return (num == rev)
         