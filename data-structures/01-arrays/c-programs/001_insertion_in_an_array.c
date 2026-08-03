// Insert an element in an array at a specific position

/*
C arrays have a fixed size, so we cannot dynamically increase their memory. However, we can
insert an element if the array already have enough memory space to accommodate the new elements
*/

#include <stdio.h>

void insert_element (int arr[], int n, int pos, int val) {
    if (pos < 0 || pos > n) {
        printf ("invalid position\n");
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
}

void display (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {
    int arr[7] = {10, 20, 30, 40, 50}; // array of size 7 with 5 elements
    printf ("the original array is: ");
    display(arr, 5);
    int n = 5;
    int pos = 3; // position where the new element is to be inserted
    int new_element = 35; // new element to be inserted
    insert_element(arr, n, pos, new_element);
    printf ("the array after inserting the new element is: "); 
    display(arr, n + 1); // display the array after insertion
}
