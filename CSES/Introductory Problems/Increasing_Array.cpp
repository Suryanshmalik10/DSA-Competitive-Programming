#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   vector<ll> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   ll ans=0;
   for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        ans+=arr[i-1]-arr[i];
        arr[i]=arr[i-1];
    }
   }
   cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}