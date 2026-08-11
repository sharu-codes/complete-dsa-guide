/*
Given a number n, print Floyd's triangle with n lines.

Floyd’s Triangle is a pattern of consecutive natural numbers arranged in rows, where the i-th row contains i numbers.

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // code here
    int num = 1;
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}