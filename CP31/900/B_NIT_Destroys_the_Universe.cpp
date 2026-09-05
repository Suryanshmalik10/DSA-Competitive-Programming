#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n;cin>>n;
   vector<ll>arr(n);
   for(auto &x:arr) cin>>x;
   ll l=0;
   while(l<n && arr[l]==0){
    l++;
   }
   if(l==n){
    cout<<0<<"\n";
    return;
   }
   ll r=n-1;
   while(r>0 && arr[r]==0){
    r--;
   }
   for(ll i=l;i<=r;i++){
    if(arr[i]==0){
        cout<<2<<"\n";
        return;
    }
   }
   cout<<1<<"\n";
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