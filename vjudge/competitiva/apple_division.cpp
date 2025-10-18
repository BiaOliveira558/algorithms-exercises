
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

 
int main() {
    fastio;
    int n, numTracks;

    while (cin >> n >> numTracks){
        
        vector <int> v(numTracks);
        for (int i = 0; i < numTracks; i++)
        {
            cin >> v[i];
        }
        int numsub = 1 << numTracks;
        
        int Maxsum = 0;
        int maskFinal = 0;
        int contMax = 0;
        
        for (int mask = 0; mask < numsub; mask++){
            int sum = 0;
            int cont = 0;

            for (int l = 0; l < numTracks; l++)
            {
                if(mask & 1 << l){
                    sum += v[l];
                    cont ++;
                }
            }
    
            if(sum <= n){
                
                if(sum > Maxsum){
                    
                    Maxsum = sum;
                    maskFinal = mask;
                    contMax = cont;
                }
                else if(sum == Maxsum && cont > contMax){
                    Maxsum = sum;
                    maskFinal = mask;
                    contMax = cont;
                }
            }
        }
    
        for (int l = 0; l < numTracks; l++)
        {
            if(maskFinal & (1<<l)){
                cout << v[l] << " ";
            }
    
        }
        
        cout << "sum:" << Maxsum << endl;
    }
    
    return 0;
}
