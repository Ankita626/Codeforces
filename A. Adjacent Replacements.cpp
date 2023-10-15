#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
const int N = 1e3+5;
ll arr[N];
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    for (int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    for (int i = 0; i<n ;i++){
        if (arr[i]&1){
            cout<<arr[i]<<' ';
        }
        else{
            cout<<arr[i]-1<<' ';
        }
    }

return 0;
}
