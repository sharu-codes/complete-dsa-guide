// Find the only repeating number from 1 to n-1

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

int repeating_number (int arr[], int n) {
    int sum_of_n = (int) n * (n - 1) / 2;
    int sum_of_array = 0;
    for (int i = 0; i < n; i++) {
        sum_of_array += arr[i];
    }

    return sum_of_array - sum_of_n;
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int result = repeating_number(arr, n);
    printf("the repeating element is: %d", result);
    return 0;
}