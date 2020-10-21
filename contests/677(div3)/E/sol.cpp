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
    long long memoize[21];
    memoize[0] = 1;
    for (int i = 1; i < 21; i++) {
        memoize[i] = i * memoize[i - 1];
    }
    long long perm = memoize[(n / 2) - 1];
    perm *= perm;
    long long comb = (memoize[n] / (memoize[n / 2] * memoize[n / 2]));
    comb /= 2;
    long long ans = perm * comb;
    cout << ans << endl;
}

/*
n=8
3! = 6
6*6 = 36
36/2 = 18
18 * 8C4 = 1260
*/

int main() {
    fast;
    solve();
    return 0;
}