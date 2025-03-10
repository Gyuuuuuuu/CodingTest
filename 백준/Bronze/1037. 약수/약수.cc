#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, max = 0, min = 99999999;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		if (v[i] > max)	max = v[i];
		if (v[i] < min) min = v[i];		
	}
	cout << max * min;
}