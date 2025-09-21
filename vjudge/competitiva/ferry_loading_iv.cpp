#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;

int main() {
    fastio;

    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i ++){
        int tam_barco;
        int num_cars;
        cin >> tam_barco;
        cin >> num_cars;

        tam_barco = tam_barco * 100;

        queue<int>left;
        queue<int>right;

        int car_tam;
        string side;

        for ( int j = 0; j < num_cars; j ++){
            cin >> side >> car_tam;

            if(side == "left"){
                left.push(car_tam);
            }
            else{
                right.push(car_tam);
            }
        }

        int crosses = 0;
        bool isLeft = true;
        int sum_cars = 0;

        while(!left.empty() && !right.empty()){

            if (!left.empty()){
                while(isLeft && sum_cars < tam_barco){
                    sum_cars = sum_cars + left.front();
                    left.pop();
                }
            }
            cross ++;
            isLeft = !isLeft;
            sum_cars = 0;

            if(!right.empty()){

                while(!isLeft &&  sum_cars < tam_barco){
                    sum_cars = sum_cars + right.front();
                    right.pop();
                }
            }
            cross ++
            isLeft = isLeft;
            sum_cars = 0;

        }
    }
    
    return 0;
}