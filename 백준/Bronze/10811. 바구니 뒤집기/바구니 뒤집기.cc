#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		v[i] = i + 1;
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;
		reverse(v.begin()+i-1, v.begin()+j);
	}

	for (int i : v) cout << i << " ";
}