#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    int tc,n;
    cin >> tc;
    
    for (int i = 0; i < tc; i++)
    {
        map < string,int> m;
        cin >> n;
        for (int j = 0; j < n; j++){
            string obj, type;
            cin >> obj >> type;

            m[type] ++;
             
        }
        int num;
        int res = 1;
        for(const auto& par: m){
            num = par.second + 1;
            res = res * num;
        }
        cout << res - 1 << endl;
    }
    

    return 0;
}