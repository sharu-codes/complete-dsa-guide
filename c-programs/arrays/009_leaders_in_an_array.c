// Find the leaders in an array

/*
Given an array arr[] of size n, the task is to find all the Leaders in the array.
An element is a Leader if it is greater than or equal to all the elements to its right side.

Note: The rightmost element is always a leader.

Examples:

Input: arr[] = [16, 17, 4, 3, 5, 2]
Output: [17 5 2]
Explanation: 17 is greater than all the elements to its right i.e., [4, 3, 5, 2], therefore 17 is a leader. 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.

Input: arr[] = [1, 2, 3, 4, 5, 2]
Output: [5 2]
Explanation: 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.
*/

#include <stdio.h>
#include <stdlib.h>

void reverse (int arr[], int l, int r) {
    if (l>=r) {
        return;
    }
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    reverse (arr, l + 1, r - 1);
}

int* leaders (int arr[], int n, int* resSize) {
    int *result;
    result = (int*)malloc(sizeof(int) * n);

    int count = 0;
    int maxRight = arr[n-1];

    result[count++] = maxRight;

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result[count++] = maxRight;
        }
    }

    reverse (result, 0, count - 1);

    *resSize = count;
    return result;
} 

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

int main () {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int resSize;
    int *result = leaders (arr, n, &resSize);
    printf("the leaders of the array is: ");
    display (result, resSize);
}