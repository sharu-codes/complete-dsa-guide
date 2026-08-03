// Find the missing number in an array with distinct integers in the range [1, n]

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

/*

works only when there is no duplicate values

int calculate_missing_sum (int arr[], int n) {
    int sum_of_arr = 0;
    for (int i = 0; i < n; i++) {
        sum_of_arr += arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int sum_of_n = (int) (max * (max + 1) / 2);
    int diff = sum_of_n - sum_of_arr;

    return diff;
}

*/

// using XOR method

/*
XOR of a number with itself is 0 i.e. x ^ x = 0 and the given array arr[] has numbers in range [1, n].
This means that the result of XOR of first n natural numbers with the XOR of all the array elements
will be the missing number. To do so, calculate XOR of first n natural numbers and XOR of all the array arr[] elements,
and then our result will be the XOR of both the resultant values.
*/

int calculate_xor (int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    // XOR all array elements
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }

    // XOR all numbers from 1 to n + 1
    for (int i = 1; i <= n + 1; i++) { // one element is missing
        xor2 ^= i;
    }

    return xor1 ^ xor2;
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int result = calculate_xor(arr, n);
    printf("the missing element is: %d", result);
    return 0;
}