#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    long long tc;
    cin >> tc;
    long long num,num1,num2;

    map<long long,long long>m;

    while(tc--){
        cin>> num;
        if(num==0){
            cin>>num1>>num2;
            m[num1] = num2; 
        }
        else{
            cin>>num1;
            auto it = m.find(num1);
            if(it != m.end()){
                cout << m.at(num1) <<endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }

    return 0;
}