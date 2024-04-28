#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 100;

long long n = 0, number[MAXN];

void nextNumber();
void printNumber();
long longsizeN();

int main() {
	cin >> n;
	for (long long i = 0; i < n; i++) {
		nextNumber();

	}
	printNumber();
}

long long sizeN() {
	string s;
	for (long long i = 0; i < MAXN; i++) {
		s += to_string(number[i]);
	}
	reverse(s.begin(), s.end());
	long long n = stoll(s);
	s = to_string(n);
	return s.size() ;
}

void nextNumber() {
	long long i = 0;
	while (number[i] == 9)
		i++;
	while (true) {
		if (number[i] - number[i + 1] < 1)
			break;
		if (i == sizeN() - 1)
			break;
		i++;
		
	}
	number[i] += 1;	
	i--;
	while(i >= 0) {
		if (number[i + 1] != 0)
			number[i] = number[i + 1] - 1;
		else
			number[i] = number[i + 1];
		i--;
	}
}

void printNumber() {
	string s;
	for (long long i = 0; i < MAXN; i++) {
		s += to_string(number[i]);
	}
	reverse(s.begin(), s.end());
	long long n = stoll(s);
	cout << n << endl;
}