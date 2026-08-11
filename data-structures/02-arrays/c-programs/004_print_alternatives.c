// Print alternate elements of an array in C

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

void print_alternatives (int arr[], int n) {
    printf ("the alternatives elements in the array are: ");
    for (int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    print_alternatives(arr, n);
    return 0;
}