#include <bits/stdc++.h>
    
using namespace std;
    
#define fast ios::sync_with_stdio(0), cout.tie()
#define test long int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define vl vector<ll> 
#define mint map<int,int>
#define sz(a) int((a).size())
#define MOD 1000000007
#define mp make_pair
#define pb push_back
    
int main() {
    test{
        int n;
        cin >> n;
        long long cur = 0;
        for (int i = 0; i < n; ++i) {
            long long x;
            cin >> x;
            cur = max(0LL, cur + x);
        }
        cout << cur << endl;
    }
}


////
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n=0;
        long size=0;
        cin>>size;
        long long arr[size];
        for(long i=0;i<size;i++){
            long long x;
            cin>>x;
            n = n - x;
            arr[i] = n;
        }
        long long mini = -1000000;
        for(long i=0;i<size;i++){
            mini = max(mini , arr[i]);
        }
        cout<<mini<<endl;
    }
    return 0;
}
