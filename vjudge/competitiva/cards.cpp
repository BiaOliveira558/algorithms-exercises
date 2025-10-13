#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    int tc;
    cin >>tc;
    int num;
    vector<int> v;
    map<int,int> m;

    for(int i = 0; i < tc; i ++){
        cin >> num;
        v.push_back(num);
    }

    for(int j = 0; j <= tc; j ++){
        m[v[j]] = j + 1;
    }
    sort(v.begin(), v.end());

    for (int k = 0; k <= tc/3; k ++){
        cout << m.find(v[k])->second << ' ' << m.find(v[v.size()- 1- k])->second << endl;
    }
        
    return 0;
}