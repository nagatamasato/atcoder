#include <iostream>
using namespace std;

int main() {
    long X;
    cin >> X;
    long amount = 100;
    long i = 1;
    while (true) {
        amount += amount / 100;
        if (amount >= X)
            break;
        ++i;
    }
    cout << i << endl;
    return 0;
}
