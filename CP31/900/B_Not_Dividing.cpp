#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n;cin>>n;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1) arr[i]++;
   }
   for(int i=1;i<n;i++){
        while(arr[i]%arr[i-1]==0) arr[i]++;
   }
   for(auto x:arr) cout<<x<<" ";
   cout<<"\n";
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