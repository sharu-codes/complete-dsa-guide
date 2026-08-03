// C program for basic matrix addition and subtraction

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

void addition (int r, int c, int arr1[r][c], int arr2[r][c]) {
    int add[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    display(r, c, add);
}

void subtraction (int r, int c, int arr1[r][c], int arr2[r][c]) {
    int sub[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    display(r, c, sub);
}

int main(){
    int r, c;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr1[r][c], arr2[r][c];
    initialise(r, c, arr1);
    printf("the first matrix is:\n");
    display(r, c, arr1);
    initialise(r, c, arr2);
    printf("the second matrix is:\n");
    display(r, c, arr2);
    printf("the addition is:\n");
    addition(r, c, arr1, arr2);
    printf("the subtraction is:\n");
    subtraction(r, c, arr1, arr2);
    return 0;
}