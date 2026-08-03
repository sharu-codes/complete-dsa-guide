// Delete an element from an array

/*
C arrays are static in size, it means that we cannot remove the element from the array memory.
But we can logically delete the element by overwriting it and updating the size variable.
*/

#include <stdio.h>

void display (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete_element (int arr[], int n, int key) {
    int i = 0;
    while (arr[i] != key) {
        i++;
    }
    for (int j = i; j < n-1; j++){
        arr[j] = arr[j+1];
    }
    n--;
}

int main () {
    int arr[5] = {10, 20, 30, 40, 50}; // array of size 5
    printf ("the original array is: ");
    display(arr, 5);
    int n = 5; 
    int key = 30; // the element to be deleted
    delete_element (arr, n, key);
    printf ("the array after deletion is: ");
    display (arr, n-1);
    return 0;
}