// Given an integer n, return all the divisors of n in the ascending order.

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        vector<int> ans;
        for (int i=1; i*i<=n; i++) {
            if (n%i == 0) {
                ans.push_back(i);
                if (i != n/i) {
                    ans.push_back(n/i);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};