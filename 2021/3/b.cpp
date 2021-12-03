#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solve(vector<string> v, bool swap, int i = 0) {
    if (v.size() == 1) return stoi(v[0], nullptr, 2);

    vector<string> z, o;
    z = o = vector<string>();

    for (int j = 0; j < v.size(); j++) {
        if (v[j][i] == '0')
            z.push_back(v[j]);
        else
            o.push_back(v[j]);
    }

    if (z.size() == o.size())
        return solve(!swap ? o : z, swap, i + 1);
    else if (o.size() > z.size())
        return solve(!swap ? o : z, swap, i + 1);
    else
        return solve(!swap ? z : o, swap, i + 1);
}

int main() {
    vector<string> all = vector<string>();

    string in;
    while (cin >> in) all.push_back(in);

    cout << solve(all, false) * solve(all, true) << endl;
}
