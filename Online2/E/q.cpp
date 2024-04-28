#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n; n *= 2;
    
    int arr[n+1];
    for(int i=1; i<=n; i++) cin >> arr[i];
    sort(arr+1, arr+n+1);
    
    bool flag = 1;
    for(int i=1; i<=n; i++) if(arr[i]*arr[n-i+1] != arr[1]*arr[n]) flag = 0;
    
    if(flag)
    {
        cout << "Yes\n";
        
        for(int i=1; i<=n/2; i++) cout << arr[i] << ' ' << arr[n-i+1] << '\n';
    }
    else cout << "No\n";
}

