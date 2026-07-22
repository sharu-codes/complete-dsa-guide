'''
Given an array of integers arr[], divide it into two subarrays left and right such that
left contains the first half of the elements and right contains the remaining elements.
If the size of the array is odd, the right subarray contains one extra element.
Compute the sum of elements in both subarrays and return the product of these two sums.

Examples :

Input : arr = [1, 2, 3, 4]
Output : 21
Explanation: Sum up an array from index 0 to 1 = 3, Sum up an array from index 2 to 3 = 7. Their multiplication is 21.
Input : arr = [1, 2] 
Output :  2 
Explanation: Their multiplication is 1*2 is equal to 2.

'''

class Solution:
    def multiply(self, arr):
        # Code here
        left_sum, right_sum = 0, 0
        for i in range (len(arr) // 2):
            left_sum += arr[i]
        
        for i in range (len(arr) //2, len(arr)):
            right_sum += arr[i]
            
        return left_sum * right_sum
        