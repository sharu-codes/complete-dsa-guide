/*

Input: mat[][] = [[1, 2, 3], 
                  [4, 5, 6],
                  [7, 8, 9]]

Output: 1 2 3 4 5 6 7 8 9

Input: mat[][] = [[11, 12, 13], 
                  [14, 15, 16], 
                  [17, 18, 19]]

Output: 11 12 13 14 15 16 17 18 19

*/

#include<stdio.h>

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

void traverse_matrix (int r, int c, int arr[r][c], int i, int j) {

    // if the current position is bottom right then print and return to the main()
    if (i == r-1 && j == c-1) {
        printf("%d", arr[i][j]);
        return;
    }

    // print the first value of the matrix : arr[0][0]
    printf("%d ", arr[i][j]);

    // end of the current row not reached yet
    if (j < c-1) {
        traverse_matrix(r, c, arr, i, j+1);
    }

    // end of the current column not reached yet
    else {
        traverse_matrix(r, c, arr, i+1, 0);
    }
}

int main(){
    int r, c;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    initialise(r, c, arr);
    printf("the matrix is:\n");
    display(r, c, arr);
    printf("the sorted matrix is:\n");
    traverse_matrix(r, c, arr, 0, 0);
}