#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v(5);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	int sum = 0;
	for (int i : v) {
		sum += i;
	}
	int avg = sum / v.size();

	sort(v.begin(), v.end());
	cout << avg << "\n" << v[2];
}