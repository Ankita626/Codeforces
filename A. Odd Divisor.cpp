#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tt; cin >> tt;
    while (tt--){
        long long n; cin >> n;
        if ((n&(n-1))==0){
            cout << "NO" << endl;
        }
        else{
            cout<< "YES"<< endl;
        }
    }
return 0;
}


