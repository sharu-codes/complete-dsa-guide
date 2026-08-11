'''
Given two arrays of arr1 and arr2,
the task is to calculate the product of the maximum element of the first array arr1,
and minimum element of the second array arr2.

Examples :

Input : arr1[] = [5, 7, 9, 3, 6, 2],  arr2[] = [1, 2, 6, 1, 9]
Output : 9
Explanation: The max in arr1 is 9. The min element in arr2 is 1. The product is 9*1 = 9.
'''



class Solution:
    
    def minMaxProduct(self, arr1, arr2):
        # code here
        max_ele = max(arr1)
        min_ele = min(arr2)
        
        return max_ele * min_ele