#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool turtleTurn = true;
        while (n > 1) {
            if (turtleTurn) {
                for (int i = 0; i < n - 1; ++i) {
                    a[i] = max(a[i], a[i + 1]);
                }
            } else {
                for (int i = 0; i < n - 1; ++i) {
                    a[i] = min(a[i], a[i + 1]);
                }
            }
            --n;
            turtleTurn = !turtleTurn;
        }
        cout << a[0] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
