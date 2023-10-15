#include <bits/stdc++.h>
#define int long long
using namespace std;
#define pb push_back
#define mod 1000000007
#define INF 500000
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n+1];
        for (int i=1;i<=n;i++){
            cin>>p[i];

        }
        string s;
        cin>>s;
        int ones=count(s.begin(),s.end(),'1');

        int q[n+1];
        for (int i=1;i<=n;i++){
            q[i]=p[i];
        }
        int l=1,r=1;
        while (l<=n && r<=n){
            if (s[l-1]=='0' && q[l]>n-ones){
                if (s[r-1]=='1' && q[r]<=n-ones){
                    int temp=q[r];
                    q[r]=q[l];
                    q[l]=temp;
//                    swap(q[r],q[l]);
                }
                r++;
                continue;
            }
            l++;
        }
        for (int i=1;i<=n;i++){
            if (i!=n){
                cout<<q[i]<<" ";
            }
            else{
                cout<<q[i]<<"\n";
            }
            }
            }
    return 0;
}
