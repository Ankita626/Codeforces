#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s;
        int x;
        vector<pair<int,string>> sad;
        for (int i = 0; i < n; i++){
            cin >> s >> x;
            sad.push_back({x,s});
        }
        sort(sad.begin(),sad.end());

        for (int i = n-1 ; i >=0 ; i--){
            cout << sad[i].second<< endl;
        }
        sad.clear();
    }

return 0;
}


