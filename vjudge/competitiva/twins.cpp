#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    
    int tc;
    cin >> tc;
    priority_queue<int> pq;

    int sumPq = 0;
    int c;

    for (int i = 0; i < tc; i++){
        cin >> c;
        sumPq = sumPq + c;
        pq.push(c);    
    }

    int numc = 0;
    int sumA = 0;
    
    while (true){
        sumA = sumA + pq.top();
        numc++;
        sumPq = sumPq - pq.top();
        pq.pop();

        if(pq.empty() || sumA > sumPq ){
            break;
        }

    }
    cout << numc << endl;

        
    return 0;
}