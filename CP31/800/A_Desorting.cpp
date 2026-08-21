#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   vector<ll>arr(n);
   cin>>arr[0];
   ll ans=LLONG_MAX;
   for(int i=1;i<n;i++){
    cin>>arr[i];
    if(arr[i]>=arr[i-1]){
        ll dif=abs(arr[i]-arr[i-1]);
        ans=min(dif/2+1,ans);
    }
    else ans=0;
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