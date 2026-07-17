def hourglassSum(arr):
    # Write your code here
    # the minimum possible hourglass sum is: -63
    max_sum = -63
    for i in range(4):
        for j in range(4):
            sum = (
                arr[i][j] + arr[i][j+1] + arr[i][j+2]
            + arr[i+1][j+1]
            + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
            )
            if sum > max_sum:
                max_sum = sum
    return max_sum

arr = [
    [-9, -9, -9, 1, 1, 1],
    [0, -9, 0, 4, 3, 2],
    [-9, -9, -9, 1, 2, 3],
    [0, 0, 8, 6, 6, 0],
    [0, 0, 0, -2, 0, 0],
    [0, 0, 1, 2, 4, 0]
]
result = hourglassSum(arr)
print("the maximum hourglass sum is:", result)