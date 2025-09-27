#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio;

    map<int, vector<int>> m1;

    vector <int> v = {1,1,2,2,3};

    m1.insert({1, {1, 1}});
    m1.insert({2, {2, 2, 2}});
    m1.insert({3, {}});

    m1[4] = {};

    int n = 4;

    vector<int> t;
    t.push_back(n);

    for (auto const& [k, v] : m1) {       
        if (v.empty()) {
            cout << k << " (sem valores)" << endl;
        }
    }



    return 0;
}
