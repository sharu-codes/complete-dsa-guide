// Split an array into three equal sum segments

/*

Given an integer array arr[], the task is to divide the array
into three non-empty contiguous segments with equal sum.
In other words, we need to return an index pair [i, j],
such that sum(arr[0...i]) = sum(arr[i+1...j]) = sum(arr[j+1...n-1]).

Note: If it is impossible to divide the array into three non-empty contiguous segments,
return [-1, -1].

Examples:

Input: arr[] = [1, 3, 4, 0, 4]
Output: [1, 2]
Explanation: 3 equal sum segments are: arr[0...1], arr[2...2] and arr[3...4] each having sum = 4.

Input: arr[] = [2, 3, 4]
Output: [-1, -1]
Explanation: No three segments exist which has equal sum.

Input: arr[] = [1, -1, 1, -1, 1, -1, 1, -1]
Output: [1, 3]
Explanation: 3 equal sum segments are: arr[0...1], arr[2...3] and arr[4...7] each having sum = 0.

*/

#include <stdio.h>
#include<stdlib.h>

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

int *find_split_array (int arr[], int n) {

    // array to store the index of segmentation
    int *res = (int*)malloc(sizeof(int) * 2);
    int res_index = 0;

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    if (total_sum % 3 != 0) {
        res[0] = -1;
        res[1] = -1;

        return res;
    }

    // keep track of the sum of the current segment
    int curr_sum = 0;

    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];

        // if the first segment is valid, store the index
        if (curr_sum == (int) total_sum / 3) {
            curr_sum = 0;
            res[res_index++] = i;

            if (res_index == 2 && i < n-1) {
                return res;
            }
        }
    }

    // if the total sum % 3 = 0 but no valid split is found
    res[0] = -1;
    res[1] = -1;
    return res;
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
	int *result = find_split_array(arr, n);
    printf("the splitting index is: [%d, %d]", result[0], result[1]);
    return 0;
}