#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

 
int main() {
    fastio;
    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<long long> A(N);
    long long total_sum = 0;
    long long max_element = 0;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        total_sum += A[i];
        if (A[i] > max_element) {
            max_element = A[i];
        }
    }

    long long L = max_element;
    long long R = total_sum;
    long long result = R;

    auto check = [&](long long max_sum) {
        long long current_subarrays = 1;
        long long current_sum = 0;

        for (long long x : A) {
            if (x > max_sum) return false;

            if (current_sum + x > max_sum) {
                current_subarrays++;
                current_sum = x;
            } else {
                current_sum += x;
            }
        }
        return current_subarrays <= K;
    };

    while (L <= R) {
        long long mid = L + (R - L) / 2;

        if (check(mid)) {
            result = mid; 
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    cout << result << "\n";

    return 0;

}
