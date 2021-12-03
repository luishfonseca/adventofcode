#include <iostream>
#include <vector>

using namespace std;

int main() {
    char bit;
    int i, amt;

    vector<int> v = vector<int>();
    i = amt = 0;

    while (cin >> bit) {
        if (i >= v.size()) v.push_back(0);
        if (bit == '1') v[i]++;

        if (cin && cin.peek() != '\n') {
            i++;
        } else {
            i = 0;
            amt++;
        }
    }

    int g, e;
    int p = 1;
    g = e = 0;
    for (int j = v.size() - 1; j >= 0; j--) {
        if (v[j] > amt/2)
            g += p;
        else
            e += p;
        p *= 2;
    }

    cout << g * e << endl;
}
