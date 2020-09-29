#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(0), cout.tie()
#define test long int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define vl vector<ll> 
#define mui unordered_map<int,int>
#define sui unordered_set<int>
#define ml map<int,int>
#define sl set<int>
#define sz(a) int((a).size())
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()

int main(){
    test{
        int n,m;
        cin>>n>>m;
        int arr[2*n][2];
        for(int i=0;i<2*n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        if(m % 2 == 1){
            cout<<"NO\n";
            continue;
        }
        string ans = "NO\n";
        for(int i=0;i<2*n;i+=2){
            if(arr[i+1][0] == arr[i][1]){
                ans = "YES\n";
                break;
            }
        }
        cout<<ans;
    }
    return 0;
}