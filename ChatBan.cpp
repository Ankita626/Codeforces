#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool valid(long long m,long long a){
//    int cnt = (m+1)/2;
//    int emotes = cnt*(cnt+1)/2;
//    return emotes>=a;
//        long long sm1 = 0;
//      for (int i = 1; i <= m; i++){
//        sm1+=i;
//      }
//      for (int i = 1; i <= m-1; i++){
//        sm1+=i;
//        return sm1>=a;
//      }
}
void solve(){
    long long k,x; cin >> k >> x;
    long long l = 1, r = k;
    long long ans = r;
    while (l<=r){
        long long  mid = (l+r)/2;
        if (valid(mid,x)==1){
            r = mid - 1;
            ans = mid ;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tt; cin >> tt;
    while (tt--){
        solve();
    }
return 0;
}
