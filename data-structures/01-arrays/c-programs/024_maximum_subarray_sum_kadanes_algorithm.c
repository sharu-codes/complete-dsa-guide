// Find the maximum sum of a subarray using Kadane's algorithm

/*

Given an integer array arr[],
find the subarray (containing at least one element)
hich has the maximum possible sum, and return that sum.
Note: A subarray is a continuous part of an array.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.

Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.

*/

#include <stdio.h>

void initialise (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf ("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int max_subaaray_sum (int arr[], int n) {

    // stores the result: maximum sum found so far
    int res = arr[0];

    // stores the maximum sum of subarray ending at current position
    int max_sum_ending = arr[0];

    for (int i = 1; i < n; i++) {

        // either extend the sum from the previous element or start from the current element
        max_sum_ending = (max_sum_ending + arr[i] > arr[i]) ? max_sum_ending + arr[i] : arr[i];

        // update the result if the new subarray sum is larger
        res = (res > max_sum_ending) ? res : max_sum_ending;
    }

    return res;
}

int main()
{
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
	int result = max_subaaray_sum(arr, n);
    printf("the sum of maximum subarray: %d", result);
    return 0;
}