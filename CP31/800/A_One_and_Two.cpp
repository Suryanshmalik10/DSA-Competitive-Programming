#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int ct=0,ans=0,idx=-1;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==2) ct++;
   }
   if(ct==0){
    cout<<1<<"\n";
   }
   else if(ct%2!=0){
    cout<<-1<<"\n";
   }
   else{
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            ans++;
            if(ans==ct/2){
                idx=i;
                break;
            }
        }
    }
    cout<<idx+1<<"\n";
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