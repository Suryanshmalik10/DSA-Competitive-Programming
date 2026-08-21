#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   ll maxm=LLONG_MIN;
   vector<ll>a,b,c;
   for(int i=0;i<n;i++){
    ll temp;cin>>temp;
    a.push_back(temp);
    maxm=max(maxm,temp);
   }
   for(int i=0;i<n;i++){
    if(a[i]==maxm){
        c.push_back(a[i]);
    }
    else b.push_back(a[i]);
   }
   if(b.size()==0){
    cout<<-1<<"\n";
   }
   else{
    cout<<b.size()<<" "<<c.size()<<"\n";
    for(auto x:b){
        cout<<x<<" ";
    }
    cout<<"\n";
    for(auto x:c){
        cout<<x<<" ";
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