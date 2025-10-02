#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    int n;
    cin >> n;
    
    map<int, int> m; 

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        m[num]++;
    }

    int mf = 0;
    for (const auto& pair : m) {
        int valor_atual = pair.second; 
        
        if (valor_atual > mf) {
            mf = valor_atual;
        }
    }
    
    cout << mf << endl;

    return 0;
}