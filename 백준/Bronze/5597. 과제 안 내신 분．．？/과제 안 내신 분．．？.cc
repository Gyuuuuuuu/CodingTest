#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector <int> v(31, 0);

	for (int i = 0; i < v.size()-3; i++) {
		int n;
		cin >> n;
		v[n]++;
	}	

	for (int i = 1; i < v.size(); i++) {
		if (v[i] == 0) cout << i << "\n";
	}
}