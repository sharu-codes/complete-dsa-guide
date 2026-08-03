// Remove duplicates from Sorted Array

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

int remove_duplicates (int arr[], int n) {
    if (n <= 1) {
        return n;
    }
    int idx = 1; // start from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            arr[idx++] = arr[i];
        }
    }
    return idx;
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int new_size = remove_duplicates(arr, n);
    printf("the modified array is: ");
    display(arr, new_size);
}