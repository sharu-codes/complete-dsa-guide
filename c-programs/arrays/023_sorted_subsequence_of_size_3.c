// Find the sorted subsequence of size 3

/*

Given an array arr[] of n integers, find the 3 elements
such that a[i] < a[j] < a[k] and i < j < k in O(n) time.
If there are multiple such triplets, then print any one of them.

Examples:  

Input: arr[] = [12, 11, 10, 5, 6, 2, 30]
Output: 5, 6, 30
Explanation: As 5 < 6 < 30, and they  appear in the same sequence in the array 

Input: arr[] = [1, 2, 3, 4]
Output: 1, 2, 3 
Explanation: As 1 < 2 < 3, and they  appear in the same sequence in the array 

Input: arr[] = [4, 3, 2, 1]
Output: No such triplet exists.

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int *find_subsequence (int arr[], int n, int *resSize) {
    if (n < 3) {
        return NULL;
    }
    int first = INT_MAX;
    int second = INT_MAX;
    int prev_first = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (x <= first) {
            first = x;
        }
        else if (x <= second) {
            second = x;
            prev_first = first;
        }
        else {
            int *res = (int*)malloc(sizeof(int) * 3);
            res[0] = prev_first;  
            res[1] = second;
            res[2] = x;

            *resSize = 3;
            return res;
        }
    }
    return NULL;
}

int main () {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int resSize;
    int *result = find_subsequence(arr, n, &resSize);
    printf("the sorted subsequence is: ");
    display (result, resSize);
    return 0;
}
