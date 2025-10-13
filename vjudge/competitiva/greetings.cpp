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

    void update_count(int v, int tl, int tr, int pos) {
        if (tl == tr) {
            tree[v] = tree[v] + 1;
        } else {
            int tm = (tl + tr) / 2;
            if (pos <= tm)
                update_count(v*2, tl, tm, pos);
            else
                update_count(v*2+1, tm+1, tr, pos);
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
    long long query(int v, int tl, int tr, int l, int r) {
        if (l > r) 
            return 0;
        if (l == tl && r == tr) {
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return query(v*2, tl, tm, l, min(r, tm))
            + query(v*2+1, tm+1, tr, max(l, tm+1), r);
    }


    SegmentTree(int n) {
        tree.assign(4*n,0);
    }
};

int main() {
    fastio;

    int tc;
    cin >> tc;

    long long a,b;
    
    while (tc --){
        int c;
        
        cin >> c;
        vector<pair<long long, long long>> p(c);
        
        for (int i = 0; i < c; i++){
            cin >> a >> b;
            p[i].first = a;
            p[i].second = b;
            
        }

        sort(p.begin(),p.end());
        vector<long long> bs;
    
        for (int j = 0; j < c; j++){
            bs.push_back(p[j].second);
        }

        vector<long long> comp = bs;
        sort(comp.begin(),comp.end());
        comp.erase(unique(comp.begin(),comp.end()),comp.end());

        for (auto &b: bs)
        {
            b = lower_bound(comp.begin(),comp.end(), b) - comp.begin() + 1;
        }
        

        SegmentTree st(comp.size() + 1);
        long long res = 0;

        for (int k = 0; k < c; k++)
        {
            res += st.query(1,1, comp.size(),bs[k]+1,comp.size());
            st.update_count(1,1,comp.size(),bs[k]);
        }
        
        cout << res<< endl;
        
    }

    return 0;
}