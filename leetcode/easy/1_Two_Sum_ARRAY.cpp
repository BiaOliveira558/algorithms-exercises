#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> resposta = {};

        return resposta;
    }
};

int main() {
    Solution sol; // cria o objeto Solution

    // cria um vetor de exemplo
    vector<int> nums = {1, 2, 3, 4};
    int target = 4;

    // chama a função
    vector<int> result = sol.twoSum(nums, target);

    // imprime o resultado
    cout << "[ ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << "]\n";

    return 0;
}