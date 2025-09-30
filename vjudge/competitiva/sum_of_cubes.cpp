#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;


int main() {
    fastio;
    ll tc;
    cin >> tc;

    for (int i = 0; i < tc; i++){
        ll num;
        cin >> num;
        set <ll> s;
    
        ll numc = 1;
        ll res;
        while (true){
            res = pow(numc,3);
            numc++;
            if(res <= num){
            s.insert(res);
            }
            else{
            break;
            }
        }
        
        if(num != 1){
            auto it = s.begin();
            while (true){
                ll num1 = *it;
                auto it2 = s.find(num - num1);
    
                if(it2 != s.end()){
                    cout << "YES" << endl;
                    break;
                }
                else{
                    if(it == s.end()){
                        cout << "NO" << endl;
                        break;
                    }
                    it++;
                }
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    

    
}