// Minimum increment by k operations to make all equal

/*

You are given an array of n-elements, you have to find the
number of operations needed to make all elements of array equal.
Where a single operation can increment an element by k.
If it is not possible to make all elements equal print -1.

Example : 

Input : arr[] = {4, 7, 19, 16},  k = 3
Output : 10

Input : arr[] = {4, 4, 4, 4}, k = 3
Output : 0

Input : arr[] = {4, 2, 6, 8}, k = 3
Output : -1

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

int find_maximum (int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int min_operations (int arr[], int n, int k) {
    int max = find_maximum (arr, n);
    int res = 0;
    for (int i = 0; i < n; i++) {
        if ((max - arr[i]) % k != 0) {
            return -1;
        }

        else {
            res += (int)(max - arr[i]) / k;
        }
    }
    return res;
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
    printf ("enter is the incrementation factor: ");
    scanf("%d", &k);
	int result = min_operations(arr, n, k);
    printf("the minimum number of operations done: %d", result);
    return 0;
}