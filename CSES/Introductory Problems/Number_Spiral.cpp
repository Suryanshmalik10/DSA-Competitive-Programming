#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll x,y; cin>>x>>y;
   ll ans;
   if(x>=y){
    if(x%2!=0) ans=(x-1)*(x-1)+y;
    else ans=x*x-(y-1);
   }
   else{
    if(y%2!=0) ans=y*y-(x-1);
    else ans=(y-1)*(y-1)+x;
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