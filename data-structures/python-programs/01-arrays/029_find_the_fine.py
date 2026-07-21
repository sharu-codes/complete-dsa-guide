'''
Given an array of car numbers car[], an array of penalties fine[], and an integer date, determine the total fine collected on that date.
The fine is collected based on parity, i.e., 
on an even date, fines are collected from odd-numbered cars, and on an odd date, fines are collected from even-numbered cars.

'''

class Solution:
    def totalFine(self, date, car, fine):
        #Code here
        sumFine = 0
        for i in range (len(fine)):
            if date % 2 != car[i] % 2:
                sumFine += fine[i]
                
        return sumFine
    
    