#include <iostream>

using namespace std;

int main() {
    int prev, curr, cnt;
    cnt = 0;
    cin >> prev;

    while (cin >> curr) {
        cnt += (curr > prev);
        prev = curr;
    }

    cout << cnt << endl;
}
