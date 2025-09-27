#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int tc;
    cin >> tc;
    int numtc;
    int num1;
    int num2;
    int num;
    
    for(int j = 0; j < tc; j ++){
        
        cin>>numtc;
        vector<int> v;
        
        for (int i = 0; i < numtc; i++){
            cin >> num;
            v.push_back(num);
        }
        
        priority_queue<int,vector<int>,greater<int>>pq(v.begin(), v.end());
        
        while (pq.size()!= 1){
            
            num1 = pq.top();
            pq.pop();
            num2 = pq.top();
            pq.pop();
            pq.push((num1+num2)-1);

        }
        
        cout << pq.top()<< endl;
        

    }
    

    return 0;
}