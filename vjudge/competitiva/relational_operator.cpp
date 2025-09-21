#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    for (int i = 0; i < num_test; i ++){
        int num1;
        cin >> num1;

        int num2;
        cin>> num2;

        if(num1 > num2){
            cout << '>' << '\n';
        }
        else if (num1 < num2)
        {
            cout << '<' << '\n';
        }
        else if (num1 == num2)
        {
            cout << '=' << '\n';
        }
    }
    
    return 0;
}