#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   ll n; cin>>n;
   ll tsum=((n*(n+1))/2);
   ll sum=0;
   for(int i=0;i<n-1;i++){
    int a; cin>>a;
    sum+=a;
   }
   cout<<tsum-sum;
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