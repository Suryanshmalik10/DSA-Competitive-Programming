#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll a,b,c,d;cin>>a>>b>>c>>d;
   if(d<b){
    cout<<-1<<"\n";
   }
   else{
    ll moves=d-b;
    a+=moves;
    if(a<c){
        cout<<-1<<"\n";
    }
    else{
        cout<<moves+(a-c)<<"\n";
    }
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