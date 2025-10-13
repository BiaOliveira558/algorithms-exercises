#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    
    string p;
    set<char> s;

    while (cin >> p){
        
        for(char l:p){
            if( l != '{' && l != '}' && l != ',' && l != ' '){
                s.insert(l);
            }
        }
    }

    cout << s.size() << endl;
}