// Find the equilibrium index of an array

/*

Given an array arr[] of size n, find an equilibrium index (if any) or -1
if no equilibrium index exists. The equilibrium index of an array is an index such that
the sum of all elements at lower indexes equals the sum of all elements at higher indexes.
When the index is at the start of the array, the left sum is 0, and when it's at the end, the right sum is 0.

Note: If multiple equilibrium indices exist,
return the first one encountered from left to right.

Examples:

Input: arr[] = [1, 2, 0, 3]
Output: 2
Explanation: The sum on the left of index 2 is 1 + 2 = 3 and sum on the right of index 2 is 3.

Input: arr[] = [1, 1, 1, 1]
Output: -1 
Explanation: There is no equilibrium index in the array.

Input: arr[] = [-7, 1, 5, 2, -4, 3, 0]
Output: 3
Explanation: The sum on the left of index 3 is -7 + 1 + 5 = -1 and
sum on the right of index 3 is -4 + 3 + 0 = -1.

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

int equilibrium_index (int arr[], int n) {
    int pref_sum = 0, total = 0;

    for (int i = 0;  i < n; i++) {
        total += arr[i];
    }

    for (int pivot = 0; pivot < n; pivot++) {
        int suff_sum = total - pref_sum - arr[pivot];
        if (pref_sum == suff_sum) {
            return pivot;
        }
        pref_sum += arr[pivot];
    }
    return -1;
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
	int result = equilibrium_index(arr, n);
    printf("the equilibrium index of the array: %d", result);
    return 0;
}