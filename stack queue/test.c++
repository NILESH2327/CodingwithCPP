#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    sort(a.begin(),a.end());
    cout << a[n/2] << endl;
}
 
int main() {
/*Jai Shree Krishna*/ 

    int t = 1; cin >> t;
    while(t--) {
        solve();
    }
}