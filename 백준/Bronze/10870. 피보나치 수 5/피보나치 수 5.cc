#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
	int a = 0, b = 1;
	for (int i = 2; i <= n; i++) {
		int temp = a + b;
		a = b;
		b = temp;
	}
    return b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	cout << fibo(n);
}