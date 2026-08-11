# Given an array arr of distinct elements,
# the task is to return an array of all elements except the two greatest elements in sorted order.

class Solution:
    def findElements(self,arr):
        # Your code goes here
        arr.sort()
        for i in range(2):
            arr.pop()
        return arr
    
