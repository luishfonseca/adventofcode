#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, cnt;
    cnt = 0;
    cin >> d >> c >> b;

    while (cin >> a) {
        cnt += (a + b + c > b + c + d);
        d = c; c = b; b = a;
    }

    cout << cnt << endl;
}
