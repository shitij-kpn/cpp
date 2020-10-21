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
    int n;
    cin >> n;
    vl v(n);
    bool flag = true;
    ll secondIndex = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0 && v[i] != v[i - 1]) {
            flag = false;
        }
    }
    if (flag) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    ll first = v[0], second = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] != first) {
            second = v[i];
            secondIndex = i;
            break;
        }
    }
    for (int i = 1; i < n; i++) {
        if (v[i] != first) {
            cout << 1 << " " << i + 1 << endl;
        } else {
            cout << secondIndex + 1 << " " << i + 1 << endl;
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