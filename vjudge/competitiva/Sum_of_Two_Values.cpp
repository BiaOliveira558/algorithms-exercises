#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    int n, x;
    cin >> n >> x;
    
    map<int, int> mp;
    bool found = false;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        
        int c = x - num;
        
        auto it = mp.find(c);

        if (it != mp.end()) {
            int indice_a = it->second;
            int indice_b = i;
            
            cout << indice_a << " " << indice_b << endl;
            found = true;
            break;
        }
        
        if (mp.find(num) == mp.end()) {
            mp[num] = i;
        }
    }
    
    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}