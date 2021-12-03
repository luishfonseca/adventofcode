#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solve(vector<string> v, bool swap, int i = 0) {
    if (v.size() == 1) return stoi(v[0], nullptr, 2);

    vector<string> z, o;

    for (int j = 0; j < v.size(); j++) {
        if (v[j][i] == '0')
            z.push_back(v[j]);
        else
            o.push_back(v[j]);
    }

    return solve((o.size() >= z.size()) ^ !swap ? o : z, swap, i + 1);
}

int main() {
    vector<string> all;
    string in;

    while (cin >> in) all.push_back(in);

    cout << solve(all, false) * solve(all, true) << endl;
}
