#include <bits/stdc++.h>

using namespace std;

// Testando instalação do compilador do c++
class Solution {
public:
    int Sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num1, num2;
    cin >> num1 >> num2; // lê da entrada padrão

    Solution sol;
    int result = sol.Sum(num1, num2);

    cout << result << "\n"; // imprime direto o resultado

    return 0;
}