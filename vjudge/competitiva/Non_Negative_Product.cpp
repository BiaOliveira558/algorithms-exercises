#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;
    cin >> input;

    for (int i = 0; i < input; i ++){

        int numNum;
        cin >> numNum;
        int numZero = 0;
        int numNeg = 0;

        for (int j = 0; j < numNum; j ++){
            int num;
            cin >> num;

            if (num == 0){
                numZero ++;
            }
            else if (num < 0){
                numNeg ++;
            }
        }
        if (numZero > 0){
            cout << "0" << "\n"; 
        }
        else if (numNeg % 2 == 0){
            cout << "0" << "\n";
        }
        else if (numNeg % 2 == 1){
            cout << "1" << "\n"; 
        }
    }

    return 0;
}