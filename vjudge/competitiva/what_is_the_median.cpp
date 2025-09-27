#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;

    int in;
    vector <int> v;
    int index;
    int final_value;

    while(cin>>in){
        v.push_back(in);
        sort(v.begin(),v.end());

        if(v.size()%2 == 0){
            int tam = v.size();
            final_value = floor(( v[((tam/2) - 1)]+v[(tam/2)])/2);
            cout<< final_value <<endl;

        }else{
            index = floor(v.size()/2);
            cout<<v[index]<<endl;
        }
        
    }

    return 0;
}