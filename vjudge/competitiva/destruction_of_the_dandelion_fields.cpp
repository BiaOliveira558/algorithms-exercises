#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll input;
    cin >> input;

    for(int i = 0; i < input; i ++){
       
        ll fields;
        cin >> fields;

        vector <ll> pares;
        vector <ll> impar;
        vector <ll> last;

        for (int j = 0; j < fields ; j++)
        {
            ll num;
            cin >> num;

            if (num % 2 == 0){
                pares.push_back(num);
            }
            else{
                impar.push_back(num);
            }

        }
        
    }
    
    return 0;
}
#undef int