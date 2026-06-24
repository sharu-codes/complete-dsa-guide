// Find the sum of all subarrays

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

int sum_of_subarrays (int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result += arr[i] * (i + 1) * (n - i);
    }

    return result;
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int result = sum_of_subarrays(arr, n);
    printf("the sum of subarrays: %d", result);
}