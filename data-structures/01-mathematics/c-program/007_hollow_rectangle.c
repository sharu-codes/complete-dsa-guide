// Given two integers n and m, print a hollow rectangle pattern consisting of n rows and m columns.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    // code here
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}