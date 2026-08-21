#include <bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
   int n,m;cin>>n>>m;
   string x,s;cin>>x>>s;
   int ans=0;
   while(x.find(s)==string::npos){
    if(x.size()>n+m){
        cout<<-1<<"\n";
        return;
    }
    x+=x;
    ans++;
   }
   cout<<ans<<"\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}