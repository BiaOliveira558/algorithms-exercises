#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int tc; cin >> tc;
    
    queue<int> in;
    queue<int> out;
    
    int entry,saida;
    
    while (tc--) {
        int count = 1;
        int numTc; cin >> numTc;
        while (numTc--)
        {
            
            cin>>entry>>saida;
            in.push(entry);
            out.push(saida);

            while (count < in.front()){
                count ++;
            }
                
            if(count <= out.front()){
                cout << count << ' ';
                count++;
                in.pop();
                out.pop();
            }
            else{
                cout << 0 << ' ';
                in.pop();
                out.pop();
            }
            
        }
        cout << endl;
            
    }
    return 0;
}