#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n; cin>>n;
   long long temp=n;
   cout<<temp<<" ";
   while(temp!=1){
    if(temp%2==0){
        temp=temp/2;
    }
    else{
        temp=temp*3+1;
    }
    cout<<temp<<" ";
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