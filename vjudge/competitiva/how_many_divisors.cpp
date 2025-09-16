#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    int b;
    cin >> b;

    int c;
    cin >> c;

    int div = 0;

    for (int i = a; i <= b; i ++){
        if (c % i == 0){
            div++;
        }
    }

     cout << div << "\n";

    return 0;
}