// Given an positive integer n, print numbers from 1 to n without using loops.

// Implement the function printTillN() to print the numbers from 1 to n as space-separated integers.

void printTillN(int n) {
    // code here
    if (n == 0) {
        return;
    }

    printTillN(n-1);
        printf("%d ", n);
}