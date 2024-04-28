#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

typedef long long ll;
typedef pair<ll, ll> pll;

const ll N = 1003, INF = 1e9;
ll n, k;

ll A[N][N], dist[N][N];

ll dx[4] = {0, 0, 1, -1};
ll dy[4] = {1, -1, 0, 0};

bool isOk(ll y, ll x)
{
    return (y >= 1 && y <= n && x >= 1 && x <= n);
}

bool check(ll mid)
{
    queue<pll> Q;
    
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) dist[i][j] = INF;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) if(A[i][j] <= mid) dist[i][j] = 0, Q.push({i, j});
    
    while(!Q.empty())
    {
        ll x, y, nx, ny;
        
        pll P = Q.front();
        y = P.F; x = P.S;
        Q.pop();
        
        for(int i=0; i<4; i++)
        {
            nx = x + dx[i]; ny = y + dy[i];
            
            if(dist[ny][nx] <= dist[y][x]+1) continue;
            
            dist[ny][nx] = dist[y][x]+1;
            Q.push({ny, nx});
        }
    }
    
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) if(dist[i][j] > k) return 0;
    return 1;
}

int main()
{
    cin >> n >> k;
    
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> A[i][j];
    
    if(k >= 2*(n-1))
    {
        cout << 0 << endl;
        return 0;
    }
    
    ll l = 0, r = 1000, mid;
    while(r-l > 1)
    {
        mid = (l+r)/2;
        
        if(check(mid)) r = mid;
        else           l = mid;
    }
    
    cout << r << endl;
}
 
