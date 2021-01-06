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
    string s;
    cin >> s;
    for (int i = 0; i <= 4; i++) {
        string temp;
        temp = s.substr(0, i) + s.substr(n - 4 + i, 4 - i);
        if (temp == "2020") {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}

int main() {
    fast;
    long long T;
    cin >> T;
    while (T--) {
        solve();
        cout << endl;
    }
    return 0;
}