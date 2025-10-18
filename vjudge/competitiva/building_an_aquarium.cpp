#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

 
int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++){
        int n,x;
        cin >> n >> x;
        vector<int> c(n);

        for (int j = 0; j < n; j++)
        {
            cin >> c[j];
        }

        int h = 0;
        int maxcost = INT_MAX;

        while (true){

            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum = sum + abs(h - c[k]);
            }

            if(sum <= x){
                maxcost = max(maxcost,sum);
                
            }
            else if (sum > x){
                h = (h / 2) + 1;
            }
            else{
                h = (h / 2) - 1;
            }
            
        }
        

        
    }
    
    
    return 0;
}
