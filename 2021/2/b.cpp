#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, h, d, n;
    string dir;

    a = h = d = 0;

    while (cin >> dir) {
        cin >> n;
        switch(dir[0]) {
            case 'f':
                h += n;
                d += a * n;
                break;
            case 'd': a += n; break;
            case 'u': a -= n; break;
        }
    }

    cout << h * d << endl;
}
