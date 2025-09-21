#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;
    cin>> input;

    set<int> s;
    for (int i = 0; i < input; i ++){
        int num;
        cin >> num;

        s.insert(num);
    }
    
    cout << s.size();
    return 0;
}