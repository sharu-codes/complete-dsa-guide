// Given a positive integer, n. Find the factorial of n.

int factorial(int n) {
    // code here
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n-1);
}