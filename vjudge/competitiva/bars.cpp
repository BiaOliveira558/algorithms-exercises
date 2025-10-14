#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

 
int main() {
    fastio;
    int tc;
    
    cin >> tc;
    
    int tam, v;
    for(int i = 0; i < tc; i ++){
        cin >> tam >> v;
        vector<int>ve (v);

        for (int j = 0; j < v; j++){
            cin >> ve[j];
        }

        int numsub = 1 << v;
        bool found = false;

        for (int mask = 0; mask <  numsub; mask++)
        {
            int sum = 0;

            for (int l = 0; l < v; l++)
            {
                if(mask & 1 << l){
                    sum += ve[l];
                }
            }
            
            if(sum == tam){
                found = true;
                cout << "YES" << endl;
                break;
            }
        }

        if(!found){
            cout << "NO" << endl;
        }
        

    }
    return 0;
}
