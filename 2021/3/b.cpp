#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solve(vector<int> v, bool swap, int s) {
    if (v.size() == 1) return v[0];

    vector<int> z, o;

    for (int j = 0; j < v.size(); j++)
        (((v[j] >> s) & 1) ? o : z).push_back(v[j]);

    return solve((o.size() >= z.size()) != swap ? z : o, swap, s - 1);
}

int main() {
    vector<int> all;
    string in;

    cin >> in;
    int s = in.size() - 1;

    do all.push_back(stoi(in, nullptr, 2));
    while (cin >> in);

    cout << solve(all, false, s) * solve(all, true, s) << endl;
}
