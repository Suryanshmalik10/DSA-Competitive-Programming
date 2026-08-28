#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n,k;cin>>n>>k;
   string s;cin>>s;
   if((n-k)<2){
    cout<<"YES"<<"\n";
    return;
   }
   unordered_map<char,int>mpp;
   for(int i=0;i<n;i++){
    mpp[s[i]]++;
   }
   for(auto [key,freq]:mpp){
    while(freq%2!=0 && k>0){
        freq--;
        k--;
    }
    mpp[key]=freq;
    if(k==0) break;
   }
   int ans=0;
   for(auto [key,freq]:mpp){
    if(freq%2!=0) ans++;
   }
   if(ans>1){cout<<"NO"<<"\n";}
   else{cout<<"YES"<<"\n";}
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