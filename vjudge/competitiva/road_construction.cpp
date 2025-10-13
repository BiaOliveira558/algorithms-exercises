#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

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
    fastio;

    int n,m;
    cin >> n >> m;

    DSU dsu(n);
    dsu.parent.resize(n + 1);
    dsu.component_size.resize(n + 1);

    for (int i = 1; i <= n; ++i) {
        dsu.make_set(i);
    }

    for (int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;

        dsu.union_sets(a,b);

        cout << dsu.num_components << " " << dsu.max_component_size << endl;

    }
    

    return 0;
}