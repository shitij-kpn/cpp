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
    vi v(n);
    for (int &i : v) {
        cin >> i;
    }
    int i = 0, j = n - 1, k = 0;
    while (i <= j) {
        if (k % 2 == 0) {
            cout << v[i++] << " ";
        } else {
            cout << v[j--] << " ";
        }
        k++;
    }
    cout << endl;
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