#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll a,b,n;cin>>a>>b>>n;
   vector<ll>arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
   ll i=0,sum=b;
   while(i<n){
    sum+=min(arr[i],a-1);
    i++;
   }
   cout<<sum<<"\n";
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