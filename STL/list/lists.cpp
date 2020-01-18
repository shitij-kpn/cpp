#include <iostream>
#include <list>

using namespace std;

#define fast ios::sync_with_stdio(0), cout.tie()
#define test long int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define vl vector<ll> 
#define m map<int,int>
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c)) i = (c).begin(); i != (c).end(); i++)


int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    list<pair<int,string> > table;
    int x;
    string s;
    for(int i=0;i<10;i++){
    	cin>>x>>s;

    	table.push_back(make_pair(x,s));
    }

    int sum{};
    for(auto i : table){
    	sum += sizeof(i.first);
    }

	for(auto i : table){
		cout<<i.first<<"    "<<i.second<<endl;
	}    
    return 0;
}
