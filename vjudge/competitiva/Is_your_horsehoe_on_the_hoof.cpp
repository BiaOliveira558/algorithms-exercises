#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    int c;
    set<int> s;

    for(int i = 0; i < 4; i++){
        cin>>c;
        s.insert(c);
    }
    cout<< 4 - s.size() << endl;
    
    return 0;
}