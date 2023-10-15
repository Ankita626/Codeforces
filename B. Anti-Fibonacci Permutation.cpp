#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        for (int i = 1 ; i<=n ; ++i){
            cout << i;
            for (int j = n; j>0; --j){
                if (i!=j)
                    cout<<' '<< j;
            }
            cout << endl;
        }
    }

return 0;
}


