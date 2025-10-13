#include <bits/stdc++.h>
using namespace std;

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
    vector<int> test_data = {1, 3, 5, 7};
    SegmentTree st(test_data);

    cout << "--- Teste de Build e Query Inicial ---" << endl;
    st.print_tree();

    int l1 = 0, r1 = 3;
    long long sum1 = st.sum_query(1, 0, st.N - 1, l1, r1);
    cout << "\n1. Query [" << l1 << ", " << r1 << "]: " << sum1 << " (Esperado: 16)" << endl;

    cout << "\n--- Executando Update ---" << endl;
    int pos_update = 2; 
    int new_value = 10; 
    st.update(1, 0, st.N - 1, pos_update, new_value);
    
    cout << "Atualizado Indice [" << pos_update << "] para: " << new_value << endl;
    cout << "Nova Tree:" << endl;
    st.print_tree();

    long long sum_after = st.sum_query(1, 0, st.N - 1, l1, r1);
    cout << "\n2. Query Apos Update [" << l1 << ", " << r1 << "]: " << sum_after << " (Esperado: 21)" << endl;

    if (sum1 == 16 && sum_after == 21) {
        cout << "\nSUCESSO: Build, Query e Update estao corretos." << endl;
    } else {
        cout << "\nFALHA: Ocorreu um erro na Segment Tree." << endl;
    }
    return 0;
}