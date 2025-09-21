#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;
    cin >> input;

    for(int i = 0; i < input; i ++){
        string word;
        cin >> word;

        if (word.size() > 3){
            cout << 3 << '\n';
        }
        else{
            if(word.find('n') != string::npos ){

            }
        }
    }
    
    return 0;
}