#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    long long ans = 0;
    long long tmp = 0;
    bool t = 0;

    for(int i = 0 ; i < n ; i ++){
        if(s[i] == '-' || s[i] == '+') {
            ans += tmp * (t ? -1 : 1);
            t = (s[i] == '-' ? 1 : 0);
            tmp = 0;

            continue;
        }
        int x = s[i] - '0';
        tmp *= 10;
        tmp += x;
    }
    ans += tmp * (t ? -1 : 1);

    cout << ans << endl;

	return 0;
}