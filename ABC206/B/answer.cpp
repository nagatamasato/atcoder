#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    int i;
    for (i=1; i<=N; ++i) {
        sum += i;
        if (sum >= N) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
