// Reverse an array in C

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

void reverse (int arr[], int l, int r) {
    if (l>=r) {
        return;
    }
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    reverse (arr, l + 1, r - 1);
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    reverse (arr, 0, n-1);
    printf ("the reversed array is: ");
    display(arr, n);
    return 0;
}