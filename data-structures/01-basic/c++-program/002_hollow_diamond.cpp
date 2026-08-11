// Given a number n. Print Hollow Diamond Pattern with n lines.

// Note: There is a space between two adjacent stars (*) in the pattern.

#include <iostream>
using namespace std;

class Solution {
  public:
    void printPat(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << "  ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                if (j == 1 || j == (2 * i - 1)) {
                    cout << " *";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = n-1; i >= 1; i--) {
            for (int j = 1; j <= n - i; j++) {
                cout << "  ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                if (j == 1 || j == (2 * i - 1)) {
                    cout << " *";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
};