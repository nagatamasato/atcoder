#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;
    long long ans = 1;
    for (int i = 1; i <= X; ++i) {
        for (int j = 2; j <= X; ++j) {
            long long result = pow(i, j);
            if (result > X)
                break;
            if (result > ans) {
                ans = result;
            }
        }
    }
    cout << ans << endl;
}
