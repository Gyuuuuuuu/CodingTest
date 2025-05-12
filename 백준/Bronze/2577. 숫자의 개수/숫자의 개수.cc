#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a * b * c;

	vector <int> v(10, 0);

	while (1) {
		if (mul > 9) {
			v[mul % 10]++;
			mul /= 10;
		}
		else {
			v[mul]++;
			break;
		}
	}
	for (int i : v)cout << i << "\n";
}