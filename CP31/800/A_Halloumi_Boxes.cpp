#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
bool issorted(vector<ll>&arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}
 
void solve(){
   int n,k;
   cin>>n>>k;
   vector<ll>arr;
   for(int i=0;i<n;i++){
    ll a;cin>>a;
    arr.push_back(a);
   }
   if(issorted(arr)){
    cout<<"YES"<<"\n";
    return;
   }
   if(k>1){
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