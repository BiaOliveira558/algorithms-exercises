#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;
    cin >> input;

    for (int i = 0; i < input; i ++){
        int x,y;
        cin>>x>>y;

        int result = abs(x-y);
        cout << result << "\n";
    }

    return 0;
}