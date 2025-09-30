#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    string saida;

    for(char letra: input){
        saida.push_back(letra);

        if(saida.size() >= 3){
            int tam = saida.size();
            if(saida[tam -1] == 'C' && saida[tam - 2] == 'B' && saida[tam-3] == 'A'){
                saida.erase(tam-3,3);
            }
        }
    }
    cout << saida << '\n';
    return 0;
}