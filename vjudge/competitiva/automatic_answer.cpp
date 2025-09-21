#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test;
    cin>> num_test;

    for (int i = 0; i < num_test; i ++){
        int num;
        cin >> num;

        int resposta;
        resposta = ((((((num * 567) / 9) + 7492) * 235) / 47) - 498);

        int dezena = (resposta/10)%10;

        cout << abs(dezena) << '\n';
    }
    
    return 0;
}