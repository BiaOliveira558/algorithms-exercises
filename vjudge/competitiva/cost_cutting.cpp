#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    for (int i = 0; i < num_test; i ++){

        vector <int> v;
        for (int j = 0; j < 3 ; j ++){
            int num;
            cin >> num;

            v.push_back(num);
        }

        sort(v.begin(), v.end());

        cout <<"Case "<<i + 1<<": "<< v[1] << '\n';

    }
    
    return 0;
}