#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
    vector <long long > tree;
    int N;

    // a = array de entrada 
    // v = index da tree
    // tl = inicio do range
    // tr = final do range

    void build_sum(const vector<long long>& a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build_sum(a, v*2, tl, tm);
            build_sum(a, v*2+1, tm+1, tr);
            tree[v] = tree[v*2] + tree[v*2+1];
        }
    }

    void build_min(const vector<long long>& a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build_min(a, v*2, tl, tm);
            build_min(a, v*2+1, tm+1, tr);
            tree[v] = min(tree[v*2], tree[v*2+1]);
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

    long long min_query(int v, int tl, int tr, int l, int r) {
        if (l > r) 
            return LLONG_MAX;
        if (l == tl && r == tr) {
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return min(min_query(v*2, tl, tm, l, min(r, tm)),min_query(v*2+1, tm+1, tr, max(l, tm+1), r));
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

    SegmentTree(const vector<long long>& initial_arr) {
        N = initial_arr.size();
        if (N > 0) {
            tree.resize(4 * N); 
            build_min(initial_arr, 1, 0, N - 1);
        }
    }
};


int main() {
    int n,q;
    cin >> n >> q;

    vector<long long> arr;
    
    for (int i = 0; i < n; i++){
        long long num;
        cin >> num;
        arr.push_back(num);
    }
    SegmentTree st(arr);
    
    //st.print_tree();
    int a,b;
    while (q --)
    {
        cin >> a >>b;
        long long res;
        res = st.min_query(1,1,st.N,a,b);
        cout << res << endl;
    }
    
    return 0;
}