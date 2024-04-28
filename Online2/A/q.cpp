#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(max({a, b, c}) - min({a, b, c}) > 100) cout << "YES\n";
    else cout << "NO\n";
}
