#include <iostream>
#include <string>

using namespace std;

int main() {
    int h, d, n;
    string dir;

    h = d = 0;

    while (cin >> dir) {
        cin >> n;
        switch(dir[0]) {
            case 'f': h += n; break;
            case 'd': d += n; break;
            case 'u': d -= n; break;
        }
    }

    cout << h * d << endl;
}
