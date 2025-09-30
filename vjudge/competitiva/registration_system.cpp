#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    
    int tc;
    cin >> tc;
    string p;
    map<string, int>m;

    for (int i = 0; i < tc; i++){
        cin >> p;
        
        auto it = m.find(p);

        if(it == m.end()){
            m.insert({p,1});
            cout << "OK" << endl;
        }else{
            int l;
            l = m[p];
            m[p] = m[p] + 1;
            p = p + to_string(l);
            cout << p << endl;
        }

    }

}