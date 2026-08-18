#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   for(int k=1;k<=n;k++){
    ll tc=k*k;
    if(k==1){
        cout<<"0"<<"\n";
    }
    else{
        ll total=(tc*(tc-1))/2;
        ll kill=(k-2)*(k-1)*4;
        cout<<total-kill<<"\n";
    }
   }
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