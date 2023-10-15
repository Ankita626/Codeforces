#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tt; cin>>tt;
    while (tt--){
        int n; cin>>n;
        string s; cin>>s;
        if (n==1){
            cout<<"YES"<<endl;
        }
        else if (n==2 && s[0]!=s[1]){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}

