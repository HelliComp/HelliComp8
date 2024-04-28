#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

#define ALL(x)      x.begin(), x.end()
#define PB(x)       push_back(x)

int n, p;

int A[N], B[N], ind[N];

int main()
{
    cin >> n;
    
    for(int i=1; i<=n; i++) cin >> A[i];
    for(int i=1; i<=n; i++) cin >> B[i];
    for(int i=1; i<=n; i++) ind[B[i]] = i;
    
    vector<int> V, U;
     
    for(int i=1; i<=n; i++)
    {
        U.clear();
        int num = A[i];
        
        for(int j=num; j<=n; j+=num) U.PB(ind[j]);
        
        sort(ALL(U), greater<>());
        for(int u: U) V.PB(u);
    }
    
	U.clear();
	U.PB(0);
	for(int v : V)
    {
		if(v > U.back()) U.PB(v);
		else U[lower_bound(ALL(U), v) - U.begin()] = v;
	}
	
	cout<< int(U.size()) - 1;
}


