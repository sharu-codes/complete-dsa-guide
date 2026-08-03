#include<stdio.h>

void initialise (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void display (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void bubble_sort (int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binary_search (int arr[], int n, int key) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("enter the range: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    initialise(arr, n);
    printf("the array is: ");
    display(arr, n);
    bubble_sort(arr, n);
    printf("\nenter the element to be searched: ");
    scanf("%d", &key);
    int result = binary_search(arr, n, key);
    if (result!=-1) {
        printf("%d is found at %d", key, result);
    }
    else {
        printf("%d is not found", key);
    }
}