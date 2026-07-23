# Given an array arr[] of non-negative integers, find the maximum product of any two elements present in the array.

class Solution:
	def maxProduct(self,arr):
		# code here
		first_max = max(arr)
		arr.remove(first_max)
		second_max = max(arr)
		return first_max * second_max
		