#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int tc;
    cin >> tc;

    priority_queue<int> pq;
    int s;

    for (int i = 0; i < tc; i++){
        cin >> s;
        pq.push(s);
    }

    int mn = 0;

    for(int j = 0; j < tc/2; j ++){
        int num1 = pq.top();
        pq.pop();
        int num2 = pq.top();
        pq.pop();

        mn = mn + (num1 - num2);
    }

    cout << mn << endl;
    
    return 0;
}