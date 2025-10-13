#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

struct SegmentTree {
    vector <long long > tree;
    int N;

    // a = array de entrada 
    // v = index da tree
    // tl = inicio do range
    // tr = final do range

    void build_sum(const vector<int>& a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build_sum(a, v*2, tl, tm);
            build_sum(a, v*2+1, tm+1, tr);
            tree[v] = tree[v*2] + tree[v*2+1];
        }
    }

    long long sum_query(int v, int tl, int tr, int l, int r) {
        if (l > r) 
            return 0;
        if (l == tl && r == tr) {
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return sum_query(v*2, tl, tm, l, min(r, tm))
            + sum_query(v*2+1, tm+1, tr, max(l, tm+1), r);
    }

    void print_tree() const {
        for (int i = 1; i < 2 * N; ++i) {
            if (i < tree.size()) {
                cout << "[" << i << "]: " << tree[i] << endl;
            }
        }
    }

    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr) {
            tree[v] = new_val;
        } else {
            int tm = (tl + tr) / 2;
            if (pos <= tm)
                update(v*2, tl, tm, pos, new_val);
            else
                update(v*2+1, tm+1, tr, pos, new_val);
            tree[v] = tree[v*2] + tree[v*2+1];
        }
    }

    SegmentTree(const vector<int>& initial_arr) {
        N = initial_arr.size();
        if (N > 0) {
            tree.resize(4 * N); 
            build_sum(initial_arr, 1, 0, N - 1);
        }
    }
};


int main() {
    fastio;

    int n, tc;
    if (!(cin >> n >> tc)) return 0;

    vector<int> arr(n);

    for(int i = 0; i < n; i ++){
        int num;
        cin >> num;
        arr[i] = num;
    }
    
    SegmentTree st(arr);

    for (int j = 0; j < tc; j++){
        int qq;
        cin >> qq;

        if(qq == 2){
            int a,b;
            cin >> a >> b;

            long long sum = st.sum_query(1,0, st.N - 1, a-1, b-1);

            cout << sum << endl;
        }else{
            int k;
            cin >> k;
            long long u;
            cin >> u;

            st.update(1, 0, st.N - 1, k - 1, u);

        }
        
    }
    
    
    return 0;
}
