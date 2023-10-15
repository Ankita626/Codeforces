#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int tt; cin >> tt;
    while (tt--){
        string st; cin>>st;
        map<char,int>mp;
        int n = st.size();
        for (int i = 0;i<n;i++){
            mp[st[i]]++;
        }
        int cnt1 = 0,cnt2 = 0;
        for (auto &x : mp){
            if (x.second==1){
                cnt1++;
            }
            else if(x.second>=2){
                cnt2++;
            }
        }
//        cout<<cnt1<<' '<<cnt2<<endl;
        cout<<(cnt2 + cnt1/2)<<endl;
//        mp.clear();
    }

return 0;
}


