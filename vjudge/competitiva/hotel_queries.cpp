#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;


struct SegmentTree {
    vector <long long > tree;
    int N;

    // a = array de entrada 
    // v = index da tree
    // tl = inicio do range
    // tr = final do range


    void build_max(const vector<long long>& a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build_max(a, v*2, tl, tm);
            build_max(a, v*2+1, tm+1, tr);
            tree[v] = max(tree[v*2], tree[v*2+1]);
        }
    }

    long long max_query(int v, int tl, int tr, int l, int r) {
        if (l > r) 
            return LONG_MIN;
        if (l == tl && r == tr) {
            tree[v] = tree[v] - 
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return max(max_query(v*2, tl, tm, l, min(r, tm)),max_query(v*2+1, tm+1, tr, max(l, tm+1), r));
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
    
    void print_tree() const {
        for (int i = 1; i < 2 * N; ++i) {
            if (i < tree.size()) {
                cout << "[" << i << "]: " << tree[i] << endl;
            }
        }
    }
    SegmentTree(const vector<long long>& initial_arr) {
        N = initial_arr.size();
        if (N > 0) {
            tree.resize(4 * N); 
            build_max(initial_arr, 1, 0, N - 1);
        }
    }
};


int main() {
    
    
    return 0;
}