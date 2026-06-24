// Rearrange array such that even positioned are greater than odd

/*

Given an array arr[], rearrange its elements according to
1-based indexing such that for every even index i,
arr[i] is greater than or equal to arr[i-1],
and for every odd index i, arr[i] is less than or equal to arr[i-1].
Return the rearranged array that satisfies these conditions for all valid indices.

Find the resultant array.[consider 1-based indexing] .

Examples:  

Input: arr[] = [1, 2, 2, 1]
Output: [1 2 1 2]
 Explanation:
For i = 2, arr[i] >= arr[i-1]. So, 2 >= 1.
For i = 3, arr[i] <= arr[i-1]. So, 1 <= 2.
For i = 4, arr[i] >= arr[i-1]. So, 2 >= 1.

Input: arr[] = [1, 3, 2]
Output: [1 3 2]
Explanation: 
For i = 2, arr[i] >= arr[i-1]. So, 3 >= 1.
For i = 3, arr[i] <= arr[i-1]. So, 2 <= 3.

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

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrange_array (int arr[], int n) {
    for (int i = 1; i < n; i++) {

        if ((i + 1) % 2 == 0) {
            if (arr[i] < arr[i - 1]) {
                swap (&arr[i], &arr[i - 1]);
            }
        }
        
        else {
            if (arr[i] > arr[i - 1]) {
                swap (&arr[i], &arr[i - 1]);
            }
        }
    }
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
	rearrange_array(arr, n);
    printf("the modified array is: ");
    display (arr, n);
    return 0;
}