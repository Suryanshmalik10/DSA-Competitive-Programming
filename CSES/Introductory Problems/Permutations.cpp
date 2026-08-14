#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   if(n!=1 && n<=3){
    cout<<"NO SOLUTION";
    return;
   }
   int odd=1,even=2;
   while(even<=n){
    cout<<even<<" ";
    even+=2;
   }
    while(odd<=n){
    cout<<odd<<" ";
    odd+=2;
   }
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