// Given a number n, print pyramid pattern with n lines.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (int j = 1; j<= i; j++) {
            cout << "*";
        }
        for (int j = 1; j < i; j++) {
            cout << "*";
        }
        cout<< "\n";
    }

    return 0;
}