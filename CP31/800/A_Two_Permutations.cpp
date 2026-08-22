#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n,a,b;cin>>n>>a>>b;
   if(a+b<=n-2 || (a==n && a==b)){
    cout<<"YES"<<"\n";
   }
   else{cout<<"NO"<<"\n";}
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