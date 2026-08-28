#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n;cin>>n;
   ll ans=0;
   for(ll i=1;i<=n;i++){
    if(n%i==0) ans++;
    else break;
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