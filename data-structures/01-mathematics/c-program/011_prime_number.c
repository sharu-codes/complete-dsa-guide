// Given a number n, determine whether it is a prime number or not.

#include<stdbool.h>

bool isPrime(int n) {
    // code here
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}