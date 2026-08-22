#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   vector<int>arr(n);
   int maxm=INT_MIN,minm=INT_MAX;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    maxm=max(maxm,arr[i]);
    minm=min(minm,arr[i]);
   }
   if(maxm==minm){cout<<"NO"<<"\n";}
   else{
    cout<<"YES"<<"\n";
    cout<<arr[n-1]<<" ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
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