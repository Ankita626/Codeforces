#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    long long a,b,c,m,s,sm;
    cin>>a>>b>>c;

    m = max(a,max(b,c));
    s = a+b+c;
    sm = s-m;
    if (m==sm){
        cout<<"YES"<<endl;
    }
    else if ((a==b && c%2==0) || (b==c && a%2==0) || (c==a && b%2==0)){
             cout<<"YES"<<endl;
             }
    else{
        cout<<"NO"<<endl;
        }
    }
    return 0;
}
