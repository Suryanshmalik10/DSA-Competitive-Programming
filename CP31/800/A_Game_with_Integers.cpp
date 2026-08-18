#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int a=(n+1)%3;
   int b=(n-1)%3;
   if(a==0 || b==0){
    cout<<"First"<<"\n";
    return;
   }
   cout<<"Second"<<"\n";
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