#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    string input;

    while(getline(cin, input)){

        deque<string> finalString;

        string curr;
        bool fim = false;
        
    
        for(char letra: input){
           if(letra == '[' || letra == ']' ){
                if(!curr.empty()){
                    if(fim){
                        finalString.push_front(curr);
                    }else{
                        finalString.push_back(curr);
                    }
                    curr.clear();
                }
                
                fim = (letra == '[');
           }
           else{

            curr += letra;
           } 
        }
        if (!curr.empty()) {
            if (fim) finalString.push_front(curr);
            else finalString.push_back(curr);
        }

        // imprime todos os blocos concatenados
        for (auto &s : finalString) cout << s;
        cout << '\n';
    }

    return 0;
}
