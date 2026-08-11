// Rotate an array in clockwise or right manner

/*

Rotations in the array is defined as the process of rearranging the elements in an array
by shifting each element to a new position. This is mostly done by rotating the elements
of the array clockwise or counterclockwise.

Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {5, 6, 1, 2, 3, 4}
Explanation: After first right rotation, arr[] becomes {6, 1, 2, 3, 4, 5} and after the second rotation, arr[] becomes {5, 6, 1, 2, 3, 4}

Input: arr[] = {1, 2, 3}, d = 4
Output: {3, 1, 2}
Explanation: The array is rotated as follows:

After first right rotation, arr[] = {3, 1, 2}
After second right rotation, arr[] = {2, 3, 1}
After third right rotation, arr[] = {1, 2, 3}
After fourth right rotation, arr[] = {3, 1, 2}

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

/* 

void rotate_right (int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
        int last = arr[n-1];
        for (int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
}

void rotate_left (int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
        int first = arr[0];
        for (int j = 1; j < n; j++) {
            arr[j-1] = arr[j];
        }
        arr[n-1] = first;
    }
}

*/

// using a temporary array
void rotate_right (int arr[], int n, int d) {
    d = d % n;
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - d + i];
    }

    for (int i = 0; i < n - d; i++) {
        temp[i+d] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

/* 

void rotate_left (int arr[], int n, int d) {
    d = d % n;
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[i + d];
    }

    for (int i = 0; i < d; i++) {
        temp[i + n - d] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

*/

int main()
{
    int n, d;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    printf("enter the position by which to rotate: ");
    scanf("%d", &d);
	printf("the rotated array is: \n");
    rotate_right(arr, n, d);
    display (arr, n);
    return 0;
}