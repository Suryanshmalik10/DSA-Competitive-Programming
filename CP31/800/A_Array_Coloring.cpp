#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int odd=0,even=0;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a%2==0) even++;
    else odd++;
   }
   if(odd%2==0) cout<<"YES"<<"\n";
   else cout<<"NO"<<"\n";
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