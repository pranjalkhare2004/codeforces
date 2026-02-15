#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    int diff_xor_sum = 0;
    int last_diff_index = -1;

    // Iterate through arrays to find XOR sum of differences and the last index where they differ
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            diff_xor_sum ^= 1;
            last_diff_index = i;
        }
    }

    if (diff_xor_sum == 0) {
        cout << "Tie" << "\n";
    } else {
        // If the last variable index is even (0, 2, ...), it's Ajisai's turn (1st, 3rd, ... turn).
        // If the last variable index is odd (1, 3, ...), it's Mai's turn (2nd, 4th, ... turn).
        if (last_diff_index % 2 == 0) {
            cout << "Ajisai" << "\n";
        } else {
            cout << "Mai" << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}