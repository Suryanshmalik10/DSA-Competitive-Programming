#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
void solve(){
   int n;cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   if(arr[0]==1){
    cout<<"YES"<<"\n";
    return;
   }
   cout<<"NO"<<"\n";
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