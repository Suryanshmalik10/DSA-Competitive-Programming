#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
   int n;cin>>n;
   vector<int> arr(n);
   map<int,int> mpp;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    mpp[arr[i]]++;
   }
   int distinct=0;
   for(auto [num,freq]:mpp){
    if(freq>0) distinct++;
   }
   if(distinct>=3){cout<<"No"<<"\n";}
   else{
    int freq1=mpp.begin()->second;
    int freq2=mpp.rbegin()->second;
    if(freq1==freq2){
        {cout<<"Yes"<<"\n";}
    }
    else if(n%2==1 && abs(freq1-freq2)==1){cout<<"Yes"<<"\n";}
    else{cout<<"No"<<"\n";}
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