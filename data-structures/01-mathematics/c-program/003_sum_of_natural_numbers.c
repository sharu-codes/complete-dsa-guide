// Given an integer n, compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // code here
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}