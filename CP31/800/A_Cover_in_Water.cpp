#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   int count=0,dot=0;
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++){
    if(s[i]=='.'){
        count++;
        dot++;
        if(dot==3){
            cout<<'2'<<"\n";
            return;
        }
    }
    else dot=0;
   }
   cout<<count<<"\n";
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