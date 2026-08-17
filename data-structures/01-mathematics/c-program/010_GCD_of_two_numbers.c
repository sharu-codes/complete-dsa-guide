// Given two positive integers a and b, find GCD of a and b.

int gcd(int a, int b) {
    // code here
    if (b == 0) {
        return a;
    }
    return gcd (b, a%b);
}