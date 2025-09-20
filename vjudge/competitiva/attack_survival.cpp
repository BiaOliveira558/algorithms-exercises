#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int n;
    cin >> n;

    vector<int> players(n);

    int points;
    cin >> points;

    int rounds;
    cin >> rounds;

    int playersWin;
    
    for(int j = 0; j < rounds; j++) {
        cin >> playersWin;
        players[playersWin - 1] = players[playersWin - 1] + 1;
        
    }

    int finalScore = 0;

    for (int k = 0; k < n; k++) {

        finalScore = points - (rounds - players[k]);

        if(finalScore <= 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}