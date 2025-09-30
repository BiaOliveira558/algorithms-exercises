#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; i++){
        cin >> prices[i];
    }
        

    sort(prices.begin(), prices.end());

    int days;
    cin >> days;
    while (days--) {
        int m;
        cin >> m;
        int count = upper_bound(prices.begin(), prices.end(), m) - prices.begin();
        cout << count << "\n";
    }

    return 0;
}