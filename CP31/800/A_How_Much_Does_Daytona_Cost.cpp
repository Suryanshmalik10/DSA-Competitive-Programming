#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n,k;cin>>n>>k;
   bool flag=false;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a==k){
        flag=true;
    }
   }
   if(flag){
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