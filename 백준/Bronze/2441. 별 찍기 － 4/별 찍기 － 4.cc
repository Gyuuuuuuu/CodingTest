#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		// 공백: n - i개
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}
		// 별: i개
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
