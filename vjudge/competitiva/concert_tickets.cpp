#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int n,m;
    cin >> n >> m;

    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        ms.insert(num);
    }

    for (int j = 0; j < m; j++) {
        int c;
        cin >> c;

        if (ms.empty()) {
            cout << -1 << endl;
            continue;
        }

        auto it = ms.lower_bound(c);

        if (it == ms.begin() && *it > c) {
            cout << -1 << endl;
        } 
        else if (it == ms.end()) {
            auto last = prev(ms.end());
            cout << *last << endl;
            ms.erase(last);
        } 
        else {
            if (*it == c) {
                cout << *it << endl;
                ms.erase(it);
            } else {
                --it;
                cout << *it << endl;
                ms.erase(it);
            }
        }
    }

    return 0;
}
