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
#define foe(v) for(auto &i:(v))

int main(){
    ll n;
    cin>>n;
    vl v(n);
    foe(v) cin>>i;
    unordered_set<ll> d;
    d.insert(0);
    ll ans=0,cur=0;
    foe(v){
        cur+=i;
        if(d.count(cur)){
            ans+=1;
            d.clear();
            d.insert(0);
            cur=i;
        }
        d.insert(cur);
    }
    cout<<ans<<"\n";

    return 0;
}