#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    for (int i = 0 ; i < num_test; i ++){
        
        int n;
        cin >> n;
        vector < int> v;

        int maxPoint = 0;

        for (int j = 0; j < 2*n; j ++){
            int num;
            cin >> num;

            v.push_back(num);
        }

        sort(v.begin(), v.end());

        while (v.size() > 0)
        {
            int mini = min(v[v.size()-1], v[v.size()-2]);

            maxPoint = maxPoint + mini;

            v.pop_back();
            v.pop_back();
        }

        cout << maxPoint << '\n';

    }
    
    return 0;
}