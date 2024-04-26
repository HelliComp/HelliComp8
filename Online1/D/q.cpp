#include<iostream>
using namespace std;
int main()
{
	int n,b=0;
	cin>>n;
	int a[n];
	while(n!=b)
	{
		cin>>a[b];
		b++;
	}
	b=0;
	while(n!=b)
	{
		if(a[b]>a[b+1])
		{
			a[b+1]=a[b];
			if(n==b+1)
			{
				cout<<a[b+1]<<" ";
			}
		}
		else
		{
			cout<<a[b]<<" ";
		}
		b++;
	}
}