// narcissist er solution:)))

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<ll> vi;
typedef vector<vi> vvi;

typedef vector<bool> vb;
typedef vector<vb> vvb;

typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

#define rep(i, a, b) for(ll i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()

// ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n, k; cin>>n>>k;

	string s; cin>>s;

	set<char> ms;
	for(ll i=0;i<n;i++) ms.insert(s[i]);

	vector<char> let;
	for(set<char>::iterator it = ms.begin(); it!=ms.end();it++) let.pb(*it);
	for (auto x:let){
        cout<<x<<' ';
	}
	cout<<endl;

	ll r = let.size();
	// for(ll i=0;i<n;i++) cout<<let[i]<<" ";cout<<endl;

	if(k > n){
		cout<<s;
		for(ll i=0;i<k-n;i++) cout<<let[0];
		cout<<endl;
	}
	else{
		string ans = s.substr(0, k);
		for(ll i=k-1;i>=0;i--){
			if(ans[i] != let[r-1]){
				ll j = 0;
				for(j=0;j<r;j++)
                if(ans[i] == let[j]) break;
				ans[i] = let[j+1];
				break;
			}
			else ans[i] = let[0];
		}
		cout<<ans<<endl;
	}

}
