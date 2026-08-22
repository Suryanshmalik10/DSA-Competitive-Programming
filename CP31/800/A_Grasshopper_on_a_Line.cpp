#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int x,k;cin>>x>>k;
   if(x%k!=0){
        cout<<1<<"\n";
        cout<<x<<"\n";
    }
    else{
        cout<<2<<"\n";
        cout<<x-1<<" "<<1<<"\n";
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