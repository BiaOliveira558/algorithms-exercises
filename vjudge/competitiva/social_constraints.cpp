#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

 
int main() {
    fastio;
    int n,m;
    
    while (cin >> n >> m && (n!=0||m != 0)){
        
        vector<int>A(m);
        vector<int>B(m);
        vector<int>distA_B(m);

        for (int i = 0; i < m; i++)
        {
            cin >> A[i] >> B[i] >> distA_B[i];
        }
        
        int cont_arr = 0;
        vector<int> p(n);
        for (int j = 0; j < n; j++)
        {
            p[j] = j;
        }
        
        do
        {
            bool is_valid = true;
            vector<int> pos_amg(n);

            for (int k = 0; k < n; k++){
                pos_amg[p[k]] = k;
            }

            for(int l = 0; l < m; l ++){
                int a = A[l];
                int b = B[l];
                int dist = distA_B[l];
                
                int dist_perm = abs(pos_amg[a] - pos_amg[b]) ;

                if(dist > 0){
                    if(dist_perm > dist ){
                        is_valid = false;
                        break;
                    }

                }
                else{
                    if(dist_perm < -dist){
                        is_valid = false;
                        break;
                    }
                }

            }

            if(is_valid){
                cont_arr ++;
            }
            
            
        } while (next_permutation(p.begin(),p.end()));
        
        cout << cont_arr << endl;
    }
    
    


    return 0;
}
