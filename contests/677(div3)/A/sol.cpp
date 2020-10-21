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
    ll x;
    cin >> x;
    ll temp = x;
    int digit = 0, digits = 0;
    while (temp != 0) {
        digit = temp;
        temp /= 10;
        digits++;
    }
    vector<int> arr = {1, 3, 6, 10};
    ll ans = (digit - 1) * 10;
    ans += arr[(digits - 1)];
    cout << ans << endl;
    return;
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