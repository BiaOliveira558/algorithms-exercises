#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int tc;
    cin >> tc;
    
    for (int i = 0; i < tc; i++){

        int n, c;
        cin >> n >> c; 
        map<int, int> m; 
    
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            m[num]++; 
        }

        long long total_cost = 0; 

        for (const auto& pair : m) {
            int f = pair.second;
            int mc = min(f, c);
            
            total_cost += mc;
        }
        
        cout << total_cost << endl;
    }
    
    return 0;
}