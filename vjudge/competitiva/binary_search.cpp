#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    int num_search;
    cin>> num_search;

    vector <int> v;

    for (int i = 0; i < num_test; i ++){
        int num;
        cin >> num;

        v.push_back(num);
    }

    for (int i = 0; i < num_search; i++){
        int value;
        cin >> value;

        auto it = lower_bound (v.begin(), v.end(), value);


        if (it != v.end() && *it == value){
            cout << (it - v.begin()) << "\n";
        }
        else{
            cout << -1 << "\n";
        }

    }
    
    return 0;
}