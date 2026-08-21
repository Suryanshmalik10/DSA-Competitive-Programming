#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll a,b,c;
   cin>>a>>b>>c;
   if(c%2!=0){
    if(b>a){cout<<"Second"<<"\n";}
    else{cout<<"First"<<"\n";}
   }
   else {
    if(a>b){cout<<"First"<<"\n";}
    else{cout<<"Second"<<"\n";}
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