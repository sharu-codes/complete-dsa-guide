// Given a Sudoku board configuration, check whether the given Sudoku board configuration is valid or not.
// A valid configuration requires that each row, column, and 3x3 sub-matrix must contain the digits 1-9 without repetition.

#include<stdio.h>
#include<stdbool.h>

bool is_valid (int arr[9][9]) {
    int rows[9] = {0}, cols[9] = {0}, sub_mat[9] = {0};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] == 0) {
                continue;
            }
            
            int val = arr[i][j];
            int pos = 1 << (val-1);

            // checks for duplicates in the current row
            if ((rows[i] & pos)) {
                return false;
            }
            rows[i] |= pos;

            // checks for duplicates in the current column
            if ((cols[i] & pos)) {
                return false;
            }
            cols[i] |= pos;

            // find the index for the 3x3 sub-matrix
            int idx = (i / 3) * 3 + j / 3;
            // checks for duplicates in the current sub-matrix
            if ((sub_mat[i] & pos)) {
                return false;
            }
            sub_mat[i] |= pos;
        }
    }
    return true;
}

int main() {
    int mat[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("is it valid? : %s\n", is_valid(mat) ? "yes" : "no");
    return 0;
}