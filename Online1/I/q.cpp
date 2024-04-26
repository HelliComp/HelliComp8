#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;

#define X         first
#define H         second

const int N = 2e5 + 23;

int n;
ll D,A;
pair<ll,ll> monster[N];
multiset<pair<ll,ll>> st;

int main() {
	cin>>n>>D>>A;
	for(int i = 1; i<= n ; i ++) {
		cin>>monster[i].X >> monster[i].H;
	}
	ll ans = 0;
	sort(monster +1,monster + n +1);
	ll sum = 0;
	for(int i = 1; i <= n ; i ++) {
		while(!st.empty() && st.begin()->X < monster[i].X) {
			sum -= st.begin()->H;
			st.erase(st.begin());
		}
		ll h = monster[i].H - sum;
		if(h <= 0) continue;
		ll num = (h + A-1)/ A;
		ll damage = num * A;
		ans += num;
		sum += damage;
		st.insert({monster[i].X + 2*D,damage});
	}
	cout<<ans;
}

