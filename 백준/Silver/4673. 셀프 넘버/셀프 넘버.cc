#include <bits/stdc++.h>
using namespace std;

// d(n): n + 각 자리수의 합
int d(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<bool> generated(10001, false);

	for (int i = 1; i <= 10000; i++) {
		int gen = d(i);
		if (gen <= 10000)
			generated[gen] = true;
	}

	for (int i = 1; i <= 10000; i++) {
		if (!generated[i])
			cout << i << "\n";
	}
}