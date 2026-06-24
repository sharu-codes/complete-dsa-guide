// Find duplicate and missing number in an array

/*

Given an unsorted array arr[] of size n,
containing elements from the range 1 to n,
it is known that one number in this range is missing,
and another number occurs twice in the array,
find both the duplicate number and the missing number.

Input: arr[] = [3, 1, 3]
Output: [3, 2]
Explanation: 3 is occurs twice and 2 is missing.

Input: arr[] = [4, 3, 6, 2, 1, 1]
Output: [1, 5] 
Explanation: 1 is occurs twice and 5 is missing.

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

int find_missing_duplicate (int arr[], int n) {
    int duplicate = -1;
    int missing = -1;

    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                count++;
            }
        }

        if (count == 0) {
            missing = i;
        }

        if (count == 2) {
            duplicate = i;
        }
    }
    printf ("missing value: %d\n", missing);
    printf ("duplicate value: %d", duplicate);
}

*/

// using frequency array

void find_missing_duplicate (int arr[], int n) {
    int freq[n + 1];

    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int duplicate = -1;
    int missing = -1;

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            missing = i;
        }
        if (freq[i] == 2) {
            duplicate = i;
        }
    }

    printf("missing value: %d\n", missing);
    printf("duplicate value: %d\n", duplicate);
}

int main() {
    int n;
    printf ("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    initialise(arr, n);
    printf ("the array is: ");
    display(arr, n);
    find_missing_duplicate (arr, n);
    return 0;
}