// Generating all the possible subarrays in an array

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

void subarray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
}

*/

//recursion method
void subarray (int arr[], int start, int end, int n) {
    if (end == n) {
        return;
    }

    else if (start > end) {
        subarray (arr, 0, end + 1, n);
    }

    else {
        printf("[");
        for (int i = start; i < end; i++) {
            printf("%d ", arr[i]);
        }
        printf("%d]\n", arr[end]);
        subarray (arr, start + 1, end, n);
    }
    return;
}

int main()
{
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
	printf("all non-empty subarrays are: \n");
    subarray(arr, 0, 0, n);
    return 0;
}