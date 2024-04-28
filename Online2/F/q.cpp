#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    
    vector<long long> cnt(26);
    long long ans=0;
    
    for(int i=n-1; i>=0; i--)
    {
        int num = s[i]-'a';
        cnt[num]++;
        
        if(i+2 < n && s[i+1] == s[i] && s[i+2] != s[i])
        {
            ans += n-i-2 - (cnt[num]-2);
            
            for(int j=0; j<26; j++) cnt[j] = 0;
            cnt[num] = n-i;
        }
    }
  
    cout << ans << endl;
}
