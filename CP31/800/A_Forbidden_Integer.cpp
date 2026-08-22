#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n,k,x;cin>>n>>k>>x;
   if(x!=1){
    cout<<"YES"<<"\n";
    cout<<n<<"\n";
    for(int i=0;i<n;i++){
        cout<<1<<" ";
    }
    cout<<"\n";
   }
   else{
    if(k>=3){
        cout<<"YES"<<"\n";
        if(n%2==0){
            cout<<n/2<<"\n";
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<(n-3)/2+1<<"\n";
            for(int i=0;i<(n-3)/2;i++){
                cout<<2<<" ";
            }
            cout<<3<<"\n";
        }
    }
    else if(k==2 && n%2==0){
        cout<<"YES"<<"\n";
        cout<<n/2<<"\n";
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
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