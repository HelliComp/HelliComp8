#include <iostream>
using namespace std;

long long int sefr(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (long long int)n * sefr(n - 2);
}

int main()

{
    long long int n, b=0;
    cin >> n;
    if (n%2!=0)
        cout<<"0";
    else
    {
        n=n/2;
        while (n>=1)
        {
            b=b+n/5;
            n=n/5;
        }
        cout << b;
    }
}
