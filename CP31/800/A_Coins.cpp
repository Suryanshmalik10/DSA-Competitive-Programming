#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n,k;cin>>n>>k;
   if(n%2==0){cout<<"YES"<<"\n";}
   else{
    if((n-k)%2==0){
        cout<<"YES"<<"\n";
    }
    else{cout<<"NO"<<"\n";}
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