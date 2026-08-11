'''
Given an array, arr[] of positive elements, and an integer k, the task is to left-rotate the array k indexes.
Note: Rotate the array even if the k is greater than the size of the array.
In these cases after every full array rotation, the array comes the same as the original array.

'''

class Solution:
    def leftRotate(self, arr, k):
        # Your code goes here
        k = k % len(arr)
        
        # arr[:] replaces the contents of the existing list.
        arr[:] = arr[k:] + arr[:k]
        return arr
            