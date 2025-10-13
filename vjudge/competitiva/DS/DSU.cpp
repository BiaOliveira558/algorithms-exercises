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
    
    const int N = 5;
    DSU dsu(N);

    for (int i = 1; i <= N; ++i) {
        dsu.make_set(i);
    }

    
    //cout << dsu.find_set(3);
    
    dsu.union_sets(1,2);
    
    for (int i = 1; i <= N; ++i) {
        cout << dsu.parent[i]<< endl;
    }

    dsu.union_sets(1,3);
    
    for (int i = 1; i <= N; ++i) {
        cout << dsu.parent[i]<< endl;
    }
    

    return 0;
}