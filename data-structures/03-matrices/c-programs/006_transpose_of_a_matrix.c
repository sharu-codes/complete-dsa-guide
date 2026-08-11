// C program to print the transpose of a matrix

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

/*
// prints the matrix in transposed order, not really transpose it
void prints_transpose (int r, int c, int arr[r][c]) {
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
*/

// transposed the matrix
void transpose_matrix (int r, int c, int arr[r][c]) {
    int trans[c][r];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    display(c, r, trans);
}

int main(){
    int r, c;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    initialise(r, c, arr);
    printf("the matrix is:\n");
    display(r, c, arr);
    printf("the transposed matrix is:\n");
    // prints_transpose(r, c, arr);
    transpose_matrix(r, c, arr);
    return 0;
}