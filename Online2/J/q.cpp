#include <bits/stdc++.h>

using namespace std;

const int N = 5010;
const int mod = 998244353;

int n, k;
int f[N][N];

signed main()
{
    cin >> n >> k;
    f[0][0] = 1;
    for(int i = 1 ; i <= n ; i ++ )
        for(int j = i ; j >= 1 ; j -- )
        {
            f[i][j] = f[i - 1][j - 1];
            if(j * 2 <= i) f[i][j] += f[i][j * 2];
            f[i][j] %= mod;
        }
    cout << f[n][k];
}