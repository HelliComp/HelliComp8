#include<bits/stdc++.h>
#ifdef LOCAL
#include "Essentials/algo/debug.h"
#else
#define debug(...)    69
#define debugArr(...)  69
#endif
using namespace std;

const int N = 35;

#define F           first
#define S           second

int n,m,k;
int a[N][N];
int ans;

int main() {
	cin>>n>>m>>k;
	for(int i = 1; i <= n ;i ++) {
		for(int j = 1; j <= m ; j ++) {
			cin>>a[i][j];
			if(k == 1) {
				ans = max(ans,a[i][j]);
			}
		}
	}
	
	
	for(int i1 = 1; i1 <= n ;i1 ++) {
		for(int j1 = 1; j1 <= m ; j1 ++) {
			for(int i2 = 1; i2 <= n ; i2 ++) {
				for(int j2 = 1; j2 <= m ; j2 ++) {
					if(make_pair(i1,j1) != make_pair(i2,j2)) {
						vector<int> vals;
						pair<int,int> x = {i1,j1} , y = {i2,j2};
						while(x.F >= 1 && x.F <= n && x.S >= 1 && x.S <= m) {
							vals.push_back(a[x.F][x.S]);
							pair<int,int> tmp = y;
							y.F = y.F + (y.F - x.F);
							y.S = y.S + (y.S - x.S);
							x = tmp;
						}
						sort(vals.begin(), vals.end(), greater<int>());
						debug(vals);
						if(int(vals.size()) >= k) {
							ans = max(ans,vals[k-1]); 
						}
					}
				}
			}
		}
	}
	cout<<ans;
}

