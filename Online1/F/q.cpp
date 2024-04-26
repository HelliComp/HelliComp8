#include<bits/stdc++.h>
using namespace std;

const int N = 123;

int a,b;
char ans[N][N];

int main() {
	cin>>a>>b;
	a--,b--;
	for(int i = 1; i <= 100; i ++) {
		for(int j = 1; j<= 100; j ++) {
			if(i <= 50) ans[i][j] = '#';
			else        ans[i][j] = '.';
		}
	}
	
	for(int i =1 ;i <= 100 && a > 0 ; i += 2) {
		for(int j = 1; j <= 100 && a > 0; j += 2) {
			ans[i][j] = '.';
			a--;
		}
	}
	
	for(int i = 52 ; i <= 100 && b > 0; i += 2) {
		for(int j = 1; j <= 100 && b >0 ;j +=2) {
			ans[i][j] = '#';
			b--;
		}
	}
	cout<<"100 100\n";
	for(int i = 1; i <= 100; i ++) {
		for(int j =1; j <= 100; j ++) {
			cout<<ans[i][j];
		}
		cout<<'\n';
	}
}
