#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(3);

	for (int i = 0; i < 3; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	cout << v[1];
}