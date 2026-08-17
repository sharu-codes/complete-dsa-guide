// For an integer n, find the number of trailing zeroes in n!.

class Solution {
  public:
    int trailingZeroes(int n) {
        // code here
        int count = 0;
        while (n > 0) {
            n /= 5;
            count += n;
        }
        return count;
    }
};