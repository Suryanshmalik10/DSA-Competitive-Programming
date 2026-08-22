#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int i=0,j=0,ans=0;
   while(j<n){
    if(arr[j]==0){
        ans=max(ans,j-i+1);
        j++;
    }
    else{
        j++;
        i=j;
    }
   }
   cout<<ans<<"\n";
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