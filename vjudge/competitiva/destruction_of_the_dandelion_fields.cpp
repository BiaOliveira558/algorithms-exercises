#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;

int main() {
    fastio;

    int test_cases;
    cin >> test_cases;

    int num_elements;
    for(int i =0;i<test_cases;i++){
        cin >> num_elements;
        ll nums;
        vector <ll> pares;
        vector <ll> impares;
        vector <ll> last;

        ll max_impar;
        ll score = 0;
        
        for (int j = 0; j < num_elements; j ++){
            cin >> nums;
            
            if(nums % 2 == 0){
                score = score + nums;
                //pares.push_back(nums);
            }
            else{
                impares.push_back(nums);
            }
        }

        if (impares.empty()){
            cout << 0 << endl;
        }
        else{
            sort(impares.begin(), impares.end());

            score = score + impares.back();

            impares.pop_back();

            //for (int k = 0; k < pares.size(); k ++){
            //    score = score + pares[k];
            //}
            
            if (impares.empty()){
                cout << score << endl;
            }
            else{

                ll max_value = floor(impares.size() / 2);

                for (int b = 0; b < max_value; b ++){
                    
                    score = score + impares.back();
                    impares.pop_back();
                }

                cout << score << endl;
            
            }
        }
        
    }
    
    return 0;
}