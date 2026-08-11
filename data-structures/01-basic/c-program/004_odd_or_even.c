// Given a positive integer n, determine whether it is odd or even. Return true if the number is even and false if the number is odd.

#include<stdbool.h>
int isEven(int n) {
    // code here
    if (n % 2 == 0) {
        return true;
    }
    return false;
}