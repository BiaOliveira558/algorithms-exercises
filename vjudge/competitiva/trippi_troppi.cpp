#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    for (int i = 0 ; i < num_test; i ++){
        
        for ( int j = 0; j < 3; j ++){
            string word;
            cin >> word;

            cout << word[0];
        }

        cout << "\n";
    }
    
    return 0;
}