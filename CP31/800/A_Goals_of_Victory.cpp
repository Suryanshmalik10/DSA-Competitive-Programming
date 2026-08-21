#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int sum=0;
   for(int i=0;i<n-1;i++){
    int a;cin>>a;
    sum+=a;
   }
   cout<<-(sum)<<"\n";
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