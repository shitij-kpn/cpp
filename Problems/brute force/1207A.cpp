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
 
int solve(int b, int p,int c,int h,int s){
    int profit = 0;
    while(b>1 && c>0){
        profit+=s;
        c--;
        b-=2;
    }
    while(b>1 && p>0){
        profit+=h;
        p--;
        b-=2;
    }
    return profit;
}
int main(){
    test{
        int b,p,c;
        int h,s;
        cin>>b>>p>>c>>h>>s;
        int profit;
        if(s>=h){
            profit = solve(b,p,c,h,s);
        }        
        else{
            profit = solve(b,c,p,s,h);
        }
        cout<<profit<<endl;
    }   	
    return 0;
}