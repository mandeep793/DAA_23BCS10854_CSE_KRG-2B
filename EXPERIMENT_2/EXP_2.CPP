#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0 && x > 0) {
            return 1;
        }
        else if (n < 0) {
            return 1 / pow(x, -n);
        }
        else {
            return pow(x, n);
        }
    }
};

int main() {
    Solution sol;

    double x;
    long long n;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = sol.myPow(x, n);
    cout << x << "^" << n << " = " << result << endl;

    return 0;
}
