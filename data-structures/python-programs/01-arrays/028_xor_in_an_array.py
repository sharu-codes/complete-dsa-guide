# You are given an array arr[], and you have to re-construct an array arr[].
# The values in arr[] are obtained by doing Xor of consecutive elements in the array.

def game_with_number (arr,  n) : 
    #Complete the function
    for i in range(1, n):
        arr[i-1] = arr[i] ^ arr[i-1]
        
    return arr