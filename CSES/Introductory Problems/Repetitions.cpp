#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s; cin>>s;
    int n=s.length();
    int ans=0;
    int l=0,r=0;
    while(r<n){
        int len=0;
        if(s[l]==s[r]){
            len=r-l+1;
        }
        else l=r;
        ans=max(ans,len);
        r++;
    }
    cout<<ans;
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