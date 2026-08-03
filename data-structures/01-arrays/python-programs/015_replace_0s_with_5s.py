# You are given an integer n. You need to convert all zeroes of n to 5.

class Solution:
    def convertFive(self, n):
        # code here
        s = str(n)
        result = ''
        for i in s:
            if i == '0':
                result += '5'
            else:
                result += i
                
        return int(result)