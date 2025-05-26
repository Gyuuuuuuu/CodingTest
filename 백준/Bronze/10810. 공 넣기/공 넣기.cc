#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> v(n,0);

	for (int i = 0; i < m; i++) {
		int start, end, ball;
		cin >> start >> end >> ball;

		for (int j = start - 1; j < end; j++) {
			v[j] = ball;
		}
	}
	for (int i : v) cout << i << " ";
}