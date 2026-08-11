// search a key in a sorted matrix

#include<stdio.h>
#include<stdbool.h>

void initialise (int r, int c, int arr[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf ("enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display (int r, int c, int arr[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// sort them if input is taken unsorted 
/*

void sorted_matrix (int r, int c, int arr[r][c]) {
    int total = r * c;
    for (int i = 0; i < total -1; i++) {
        for (int j = 0; j < total - i - 1; j++) {

            int r1 = j / c;
            int r2 = (j + 1) / c;
            int c1 = j % c;
            int c2 = (j + 1) % c;

            if (arr[r1][c1] > arr[r2][c2]) {
                int temp = arr[r1][c1];
                arr[r1][c1] = arr[r2][c2];
                arr[r2][c2] = temp;
            }
        }
    }
}

*/

bool search_matrix (int r, int c, int arr[r][c], int key) {
    int low = 0;
    int high = r * c - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        // find row and column of elements at mid index
        int row = mid / c;
        int col = mid % c;

        if (arr[row][col] == key) {
            return true;
        }
        else if (arr[row][col] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return false;
}

int main(){
    int r, c;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    initialise(r, c, arr);
    printf("the matrix is:\n");
    display(r, c, arr);
    int key;
    printf("enter the key to be searched: ");
    scanf("%d", &key);
    if (search_matrix(r, c, arr, key)) {
        printf("%d is found in the matrix", key);
    }
    else {
        printf("%d is not found in the matrix", key);
    }
    return 0;
}