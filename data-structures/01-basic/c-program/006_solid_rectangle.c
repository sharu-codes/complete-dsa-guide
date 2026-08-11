/* Given two integers n and m, print a solid rectangle pattern of n rows and m columns using the "*" character.

Note: There is a space between two adjacent stars (*) in the pattern.

*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // code here
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}