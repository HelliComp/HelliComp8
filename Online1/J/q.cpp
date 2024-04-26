#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;

#define X         first
#define H         second

const int N = 1e5 + 23;
const ll mod = 1e9 + 7;

int n,k;
vector<int> G[N];
ll ans;

void dfs(int v,int p = -1) {
	int num = k - 1 - (p != -1);
	for(int u : G[v]) if(u != p) {
		ans = (ans*num) %mod;
		num --;
		dfs(u,v);
	}
}

int main() {
	cin>>n>>k;
	ans = k;
	for(int i =1 ; i< n ; i ++) {
		int v,u; cin>>v>>u;
		G[v].push_back(u);
		G[u].push_back(v);
	}
	dfs(1);
	cout<<ans;
}

