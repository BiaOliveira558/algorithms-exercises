#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct DSU {

    vector<int> parent;
    vector<int> component_size;

    long long num_components;
    long long max_component_size;

    void make_set(int v) {
        parent[v] = v;
        component_size[v] = 1;
    }

    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (component_size[a] < component_size[b])
                swap(a, b);
                parent[b] = a;
                component_size[a] += component_size[b];

                num_components--;
                max_component_size = max(max_component_size, (long long)component_size[a]);

        }
    }

    DSU(int n) : parent(n + 1), component_size(n + 1), num_components(n), max_component_size(1) {
        for (int i = 1; i <= n; ++i) {
            make_set(i);
        }
    }
};


int main() {
    int n,m;
    cin >> n >> m;
   
    DSU dsu(n);

    for (int i = 0; i < m; i++)
    {
        string query;
        cin >> query;
        int a,b;

        if(query == "union"){
            cin >> a >> b;
            dsu.union_sets(a,b);
        }
        else{
            cin >> a >> b;
            int setA = dsu.find_set(a);
            int setB = dsu.find_set(b);

            if(setA == setB){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }
    }
    
    
    

    return 0;
}