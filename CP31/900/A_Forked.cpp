#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll a,b;cin>>a>>b;
   ll xk,yk;cin>>xk>>yk;
   ll xq,yq;cin>>xq>>yq;
   vector<pair<ll,ll>> moves={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
   set<pair<ll,ll>> king,queen;
   for(auto [dx,dy]:moves){
    king.insert({xk+dx,yk+dy});
    queen.insert({xq+dx,yq+dy});
   }
   int ans=0;
   for(auto x:king){
    if(queen.find(x)!=queen.end()) ans++;
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