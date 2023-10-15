#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int>vec1(n+1);
    vector<int>vec2(n);
    vector<int>vec3(n-1);
    for (int i = 1; i<=n ;i++){
        cin >> vec1[i];
    }
    for (int i = 1; i<=n-1; i++){
        cin >> vec2[i];
    }
    for (int i = 1; i<=n-2; i++){
        cin >> vec3[i];
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    sort(vec3.begin(),vec3.end());
    bool ok = 0;
    for (int i = 1; i<=n-1; i++){
        if (vec1[i]==vec2[i]){
            ok = 0;
        }
        else{
            cout << vec1[i] << endl;
            ok = 1;
            break;
        }
    }
    if (!ok){
        cout << vec1[n] << endl;
    }

    bool flag = 0;
    for (int i = 1; i<=n-2; i++){
        if (vec2[i]==vec3[i]){
            flag = 0;
        }
        else{
            cout << vec2[i] << endl;
            flag = 1;
            break;
        }
    }
    if (!flag){
        cout << vec2[n-1] << endl;
    }
return 0;
}
