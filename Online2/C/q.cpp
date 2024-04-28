#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        int x; cin >> x;
        if(x < 30 || x > 120) ans++;
    }
    
    if(ans*2 > n)      cout << "bad";
    else if(ans*10 > n) cout << "normal";
    else               cout << "good";
}
