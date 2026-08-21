#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
  vector<vector<char>> arr(10, vector<char>(10));
    int ans = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> arr[i][j];

            if(arr[i][j] == 'X'){
                if((j == 0) || (i == 0) || (j == 9) || (i == 9))
                    ans += 1;
                else if((j == 1) || (i == 1) || (j == 8) || (i == 8))
                    ans += 2;
                else if((j == 2) || (i == 2) || (j == 7) || (i == 7))
                    ans += 3;
                else if((j == 3) || (i == 3) || (j == 6) || (i == 6))
                    ans += 4;
                else
                    ans += 5;
            }
        }
    }

    cout << ans << "\n";
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