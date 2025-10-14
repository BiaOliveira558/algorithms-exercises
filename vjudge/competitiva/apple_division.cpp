#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

 
int main() {
    fastio;
    
    int num;
    cin >> num;
    vector<int> pesos(num);

    for (int i = 0; i < num; i++)
    {
        cin >> pesos[i];
    }

    int numMasks = 1 << num;
    long long dif = INT_MAX;

    for (int j = 0; j <numMasks; j++)
    {
        long long  sumA = 0;
        long long sumB = 0;

        for (int k = 0; k < num; k++)
        {
            if(j & 1 << k){
                sumA += pesos[k];
            }else{
                sumB += pesos[k];
            }
        }

        long long difAux = abs(sumB - sumA);
        dif = min(dif,difAux);
    }

    cout << dif << endl;
    
    
    return 0;
}
