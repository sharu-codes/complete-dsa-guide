# Given an array arr[] of integers which may or may not contain duplicate elements.
# Your task is to remove duplicate elements.
# Your result should have elements according their first appearance in the input array.

class Solution:
    def removeDuplicate(self, arr):
        # code here
        ans = []
        seen = set()
        
        for num in arr:
            if num not in seen:
                ans.append(num)
                seen.add(num)
                
        return ans

