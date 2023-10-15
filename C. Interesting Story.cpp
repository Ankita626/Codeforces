#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tt; cin>>tt;
    while (tt--){
        int n; cin>>n;
        string st = "";
        while (n--){
            string s; cin>>s;
            st+=s;
        }
        sort(st.begin(),st.end());
        int sz = st.size();
        map<char,int>mp;
        for (int i = 0; i<sz ;i++){
            mp[st[i]]++;
        }
        vector<int>vec;
        for (auto &x : mp){
            vec.push_back(x.second);
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        int last = sz - v[0];
        if

    }

return 0;
}


