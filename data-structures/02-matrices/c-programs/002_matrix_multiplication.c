// C program for basic matrix multiplication

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

void multiplication (int r1, int c1, int c2, int arr1[r1][c1], int arr2[c1][c2]) {
    int res[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += arr1[i][k] + arr2[k][j];
            }
        }
    }
    display(r1, c2, res);
}

int main(){
    int r1, c1, c2;
    printf("enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    int arr1[r1][c1];
    initialise(r1, c1, arr1);
    printf("the first matrix is:\n");
    display(r1, c1, arr1);
    printf("enter the number of columns for second matrix: ");
    scanf("%d", &c2);
    int arr2[c1][c2];
    initialise(c1, c2, arr2);
    printf("the second matrix is:\n");
    display(c1, c2, arr2);
    printf("the result after multiplication: ");
    multiplication(r1, c1, c2, arr1, arr2);
    return 0;
}