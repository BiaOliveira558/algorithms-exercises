#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int tc;
    cin >> tc;

    for (int k = 0; k < tc; k++){
        
        int nb,pg,pb;
        cin >> nb >> pg >> pb;
    
        priority_queue<int> green;
        priority_queue<int> blue;
        
        int num;
        for (int i = 0; i < pg; i++){
            cin>>num;
            green.push(num);
        }
        for (int j = 0; j < pb; j++){
            cin>>num;
            blue.push(num);
        }
        
        while (!green.empty() && !blue.empty()){
            nb = min({nb, (int)green.size(),(int)blue.size()});
            vector<int> vg;
            vector<int> vb;

            for (int i = 0; i < nb; i++){
    
                if(green.top() == blue.top()){
                        green.pop();
                        blue.pop();
                }
                else if (blue.top() > green.top()){
                    vb.push_back(blue.top() - green.top());
                    green.pop();
                    blue.pop();
                }
                else if (green.top() > blue.top()){
                    vg.push_back(green.top() - blue.top());
                    blue.pop();
                    green.pop();
                }
                
    
            }
            for(int p: vg){
                green.push(p);
            }
            for(int p: vb){
                blue.push(p);
            }
            
        }
            
        if(green.empty() && !blue.empty()){
            cout<< "blue wins" << endl;
            int tam = blue.size();
            for(int b = 0; b < tam; b ++){
                cout << blue.top() << endl;
                blue.pop();
            }
        }
        else if (!green.empty() && blue.empty())
        {
            cout<< "green wins" << endl;
            int tam = green.size();
            for(int g = 0; g < tam; g ++){
                cout << green.top() << endl;
                green.pop();
            }
        }
        else if (green.empty() && blue.empty())
        {
            cout<< "green and blue died" << endl;
        }
        
    if (k != tc - 1) cout << endl;
    }
    
    return 0;
}
