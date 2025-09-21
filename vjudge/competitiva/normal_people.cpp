#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    for (int i = 0 ; i < num_test; i ++){
        
        string nome;
        cin >> nome;

        reverse(nome.begin(), nome.end());

        for (char &letra: nome){
            if(letra == 'p'){
                letra = 'q';
            }
            else if (letra == 'q')
            {
                letra = 'p';
            }   
        }
        cout << nome << '\n';
    }
    
    return 0;
}