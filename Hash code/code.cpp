#include <iostream>
#include <algorithm>

using namespace std;

#define fast ios::sync_with_stdio(0), cout.tie()
#define test long int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define vl vector<ll> 
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c)) i = (c).begin(); i != (c).end(); i++)


int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    ll m , n;

    cin>>m>>n;

    ll a[n];

    for(ll i=0 ; i<n ; i++){
    	cin>>a[i];
    	cout<<a[i]<<endl;
    }

    cout<<binary_search(a, a + 4, 5);
    
    return 0;
}
