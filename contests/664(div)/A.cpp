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
 
 
bool check_palindrome(map<char,int>& mp){
	int odd=0;
    bool zero = false;
	for(auto i:mp){
		if(i.second%2 == 1){
			odd++;
		}
        if(i.second == 0){
            zero = true;
        }
	}
	if(odd < 2 || odd == 4 ){
		return true;
	}
    if(odd == 2){
        return false;
    }
    if(odd == 3){
        if(!zero){
            return true;
        }
        else if(zero && mp['w']==0){
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}
 
 
int main(){
   	map<char,int> mp;
   	test{
   		cin>>mp['r'];
   		cin>>mp['g'];
   		cin>>mp['b'];
   		cin>>mp['w'];
   		if(check_palindrome(mp)){
   			cout<<"YES"<<endl;
   		}
   		else{
   			cout<<"NO"<<endl;
   		}
   	}
    return 0;
}