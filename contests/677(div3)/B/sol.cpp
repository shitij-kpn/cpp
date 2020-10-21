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
    vi v(n);
    int oneCount = 0;
    ll lastindex = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) {
            oneCount++;
            lastindex = i;
        }
    }
    if (oneCount == 0 || oneCount == 1) {
        cout << 0 << endl;
        return;
    }
    bool flag = false;
    int count = 0;
    for (int i = 0; i < lastindex; i++) {
        if (i + 1 <= lastindex && v[i] == 1 && v[i + 1] == 0) {
            flag = true;
        }
        if (i + 1 <= n && v[i] == 0 && v[i + 1] == 1) {
            flag = false;
        }
        if (i + 1 <= n && v[i] == 1 && v[i + 1] == 1) {
            flag = false;
        }
        if (flag) {
            count++;
        }
    }
    cout << count << endl;
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