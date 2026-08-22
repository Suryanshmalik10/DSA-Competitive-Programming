#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int a=0,b=0,ans=0;
   for(int i=0;i<n;i++){
    int temp;cin>>temp;
    if(temp==1) a++;
    else b++;
   }
   while(a<b){
    ans++;
    a++;b--;
   }
   if(b%2!=0){cout<<ans+1<<"\n";}
   else{cout<<ans<<"\n";}
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