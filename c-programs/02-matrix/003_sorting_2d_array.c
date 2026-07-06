// sort the unsorted matrix

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

int main(){
    int r, c;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    initialise(r, c, arr);
    printf("the matrix is:\n");
    display(r, c, arr);
    printf("the sorted matrix is:\n");
    sorted_matrix (r, c, arr);
    display(r, c, arr);
    return 0;
}