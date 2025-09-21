#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w,h,x,y,r;
    cin>> w >> h >> x >> y >> r;

    if ((x + r <= w) and (y + r <= h) and (x - r >= 0) and (y - r >= 0) and x != 0 and y != 0){
        
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
    
    return 0;
}