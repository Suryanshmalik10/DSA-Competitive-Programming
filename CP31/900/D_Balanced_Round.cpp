#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n,k;cin>>n>>k;
   vector<ll>arr(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   if(n==1){
    cout<<0<<"\n";
    return;
   }
   sort(arr.begin(),arr.end());
   ll l=0,ans=0;
   for(ll r=1;r<n;r++){
    if(arr[r]-arr[r-1]>k){
        l=r;
    }
    ans=max(ans,r-l+1);
   }
   cout<<n-ans<<"\n";
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