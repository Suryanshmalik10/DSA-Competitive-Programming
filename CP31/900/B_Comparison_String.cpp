#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n;cin>>n;
   string s;cin>>s;
   ll ans=1,l=0,r=1;
   while(r<n){
    if(s[r]!=s[r-1]) l=r;
    ans=max(ans,r-l+1);
    r++;
   }
   cout<<ans+1<<"\n";
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