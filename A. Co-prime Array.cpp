#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int>v;
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,x,pai = 1;

    cin>>n;
    for (int i = 0; i<n ;i++){
        cin >> x;
        if (__gcd(pai,x)==1){
            pai = x;
            v.push_back(pai);
        }
        else{
            v.push_back(1);
            v.push_back(x);
            pai = x;
        }
    }
    cout<<v.size() - n<<endl;
    for (auto x:v){
        cout<<x<<' ';
    }


return 0;
}


