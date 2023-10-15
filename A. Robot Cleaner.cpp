#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n,m,r,c,x,y,d,dd,res;
        cin>>n>>m>>r>>c>>x>>y;
        if (r>x){
            d = n-r+n-x;
        }
        else{
            d = x-r;
        }
        if (c>y){
            dd = m-c+m-y;
        }
        else{
            dd = y-c;
        }
        res = min(d,dd);
        cout<<res<<'\n';
}
return 0;
}
