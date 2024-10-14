#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    long sum = 0;
    int i;
    for (i=1; i<=N; ++i) {
        if (i % 3 == 0 || i % 5 == 0)
            continue;
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
