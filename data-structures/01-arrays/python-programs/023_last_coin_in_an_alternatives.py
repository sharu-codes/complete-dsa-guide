# Given an array integer arr[], representing the values of coins arranged in a row.

'''
Two players play a game by picking coins alternately.
At each turn, a player can pick a coin from either the beginning or the end of the array.
Both players follow a greedy strategy, i.e., they always pick the coin with the maximum value among the two available ends.
The game continues until only one coin remains.
Find the value of the last remaining coin.
'''

class Solution:
    def coin(self, arr):
        # code here
        while len(arr) != 1:
            if arr[0] > arr[-1]:
                arr.pop(0)
            else:
                arr.pop()
                
        return arr[0]
        