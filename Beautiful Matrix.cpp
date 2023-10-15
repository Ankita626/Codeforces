#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int arr[6][6];
void solve(){
    int ri,ro;
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5 ; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (arr[i][j]==1){
                ri = i;
                ro = j;
            }
        }
    }
    cout << abs(ri-3)+abs(ro-3) <<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
return 0;
}
