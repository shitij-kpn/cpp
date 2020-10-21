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
    ll n;
    cin >> n;
    vl v(n);
    bool flag = true;
    ll largest = 0;
    ll maxi = -10000;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0 && v[i] != v[i - 1]) {
            flag = false;
        }
        if (v[i] > maxi) {
            maxi = v[i];
        }
    }
    if (flag) {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == maxi) {
            if (v[i] > v[i + 1] || v[i] > v[i - 1]) {
                cout << i + 1;
                cout << endl;
                return;
            }
        }
    }
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