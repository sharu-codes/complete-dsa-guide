// Find the duplicate elements in K distance in an array

/*

Given an integer array arr[] and an integer k, determine whether there exist
two indices i and j such that arr[i] == arr[j] and |i - j| ≤ k. If such a pair
exists, return 'Yes', otherwise return 'No'.

Examples: 

Input: k = 3, arr[] = [1, 2, 3, 4, 1, 2, 3, 4]
Output: No
Explanation: Each element in the given array arr[] appears twice and the distance between every element and its duplicate is 4.

Input: k = 3, arr[] = [1, 2, 3, 1, 4, 5]
Output: Yes
Explanation: 1 is present at index 0 and 3.

Input: k = 3, arr[] = [1, 2, 3, 4, 5]
Output: No
Explanation: There is no duplicate element in arr[].

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

int duplicate_distance (int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int c = 1; c <= k && i + c < n; c++) {
            int j = i + c;
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n, k;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    printf("enter the K distance: ");
    scanf("%d", &k);
	int result = duplicate_distance(arr, n, k);
    printf("is there a duplicate element with %d distance? ", k);
    printf ("%s\n", result ? "Yes" : "No");
    return 0;
}