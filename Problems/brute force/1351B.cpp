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


int main(){
    bool m[100001] = {false};
    for(int i=2;i<=100;i++){
        m[i*i] = true;
    }
    test{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int area = (a*b) + (c*d);
        if(m[area] == true){
            if(max(a,b)==max(c,d) && min(a,b)+min(c,d)==max(a,b)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


