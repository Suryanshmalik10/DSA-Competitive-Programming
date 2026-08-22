#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int ct=0,lastdigit=0;
   while(n>0){
    lastdigit=n%10;
    n=n/10;
    ct++;
   }
   cout<<(lastdigit+(ct-1)*9)<<"\n";
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