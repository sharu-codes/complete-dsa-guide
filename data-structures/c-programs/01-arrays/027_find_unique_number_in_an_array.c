// Find an unique number which appears once in an array with duplicates

/*
 
Input:  arr[] = [2, 3, 5, 4, 5, 3, 4]
Output: 2 
Explanation: Since 2 occurs once, while other numbers occur twice, 2 is the answer.

Input: arr[] = [2, 2, 5, 5, 20, 30, 30]
Output: 20
Explanation: Since 20 occurs once, while other numbers occur twice, 20 is the answer.

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

int unique_element (int arr[], int n) {
    int res = 0;

    for (int i = 0; i < n; i++) {
        res ^= arr[i];
    }

    return res;
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    int result = unique_element(arr, n);
    printf("the unique element is: %d", result);
    return 0;
}
