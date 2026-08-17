// Given a number n, your task is to find the largest prime factor of n.

class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int i = 2;
        while (i*i <= n) {
            if (n%i == 0) {
                n /= i;
            }
            else {
                i++;
            }
        }
        return n;
    }
};