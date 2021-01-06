#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(0), cout.tie()
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define mui unordered_map<int, int>
#define sui unordered_set<int>
#define ml map<int, int>
#define sl set<int>
#define sz(a) int((a).size())
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define all(x) x.begin(), x.end()

void solve() {
    int x;
    cin >> x;
    if (x > 45) {
        cout << -1 << endl;
        return;
    }
    string ans("");
    for (int i = 9; i >= 1; i--) {
        if (x == 0) {
            break;
        }
        if (x >= i) {
            ans += to_string(i);
            x -= i;
        }
    }
    reverse(all(ans));
    cout << ans << endl;
}

int main() {
    fast;
    long long T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}