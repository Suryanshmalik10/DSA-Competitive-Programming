#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n;cin>>n;
   vector<ll>v(n);
   for(auto &x:v)cin>>x;
   if(n == 1){
        cout << 0 << "\n";
        return;
    }
   ll ans1=-1,ans2=-1,ans3=-1;
   for(int i=1;i<n;i++){
    ans1=max(ans1,v[i]-v[0]);
   }
   for(int i=0;i<n-1;i++){
    ans2=max(v[n-1]-v[i],ans2);
   }
   for(int i=1;i<n;i++){
    ans3=max(v[i-1]-v[i],ans3);
   }
   cout<<max({ans1,ans2,ans3})<<"\n";
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