#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n,k,x;cin>>n>>k>>x;
   ll maxm=0,minm=0;
   minm=k*(k+1)/2;
   maxm=k*(n+n-k+1)/2;
   if(x>=minm && x<=maxm){
    cout<<"YES"<<"\n";
   }
   else{
    cout<<"NO"<<"\n";
   }
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