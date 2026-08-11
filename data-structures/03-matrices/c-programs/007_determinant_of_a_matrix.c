// C program to calculate the determinant of a matrix

#include<stdio.h>

void initialise (int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf ("enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display (int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int calculate_determinant (int n, int arr[n][n]) {
    if (n == 1) {
        return arr[0][0];
    }
    if (n == 2) {
        return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    }

    int det = 0;
    int sign = 1;

    for (int curr_col = 0; curr_col < n; curr_col++) {

        int minor[n-1][n-1];
        int row = 0;

        for (int i = 1; i < n; i++) {
            int col = 0;
            for (int j = 0; j < n; j++) {

                if (j == curr_col) {
                    continue;
                }

                minor[row][col] = arr[i][j];
                col++;
            }
            row++;
        }

        det += sign * arr[0][curr_col] * calculate_determinant (n-1, minor);
        sign = -sign;
    }
    return det;
}

int main(){
    int n;
    printf("enter the number of rows and columns: ");
    scanf("%d", &n);
    int arr[n][n];
    initialise(n, arr);
    printf("the matrix is:\n");
    display(n, arr);
    int determinant = calculate_determinant(n, arr);
    printf("the determinant of the matrix is: %d", determinant);
    return 0;
}