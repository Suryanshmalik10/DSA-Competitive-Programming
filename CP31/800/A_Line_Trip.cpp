#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n,x;
   cin>>n>>x;
   int maxm=INT_MIN;
   int last=0;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    int curr=a-last;
    last=a;
    maxm=max(maxm,curr);
   }
   int y=x-last;
   if(2*y<=maxm){
    cout<<maxm<<"\n";
    return;
   }
   cout<<maxm+(2*y-maxm)<<"\n";

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