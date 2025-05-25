#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a, b;//b가 아무튼 더 큼
	cin >> a >> b;

	if (a > b)swap(a, b);
	if (b - a == 1 || b - a == 0) {
		cout << 0;
	}
	else {
		cout << b - a - 1 << "\n";
	
		for (long long i = a+1; i < b; i++) {
			cout << i << ' ';
		}
	}
}