#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    
    int arr[n+1];
    for(int i=1; i<=n; i++) cin >> arr[i];
    
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i+1]) ans += arr[i+1]-arr[i];
        if(arr[i] > arr[i+1]) ans++;
    }
    
    if(k >= ans) cout << "yes\n";
    else         cout << "no\n";
}
