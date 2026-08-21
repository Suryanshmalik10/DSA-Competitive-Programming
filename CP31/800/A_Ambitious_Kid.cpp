#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int minm=INT_MAX;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    minm=min(abs(a),minm);
   }
   cout<<minm<<"\n";
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