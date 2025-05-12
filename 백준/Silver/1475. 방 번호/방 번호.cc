#include<bits/stdc++.h>
using namespace std;
int main() {
	vector <int> v(10, 0);
	int n;
	cin >> n;

	while (n > 0) {
		if (n % 10 == 6) {
			v[9]++;
			n /= 10;
		}else{
			v[n % 10]++;
			n /= 10;
		}
		
	}
	if (v[9] % 2 == 0) {
		v[9] = v[9] / 2;
	}
	else {
		v[9] = v[9] / 2 + 1;
	}
	int x = *max_element(v.begin(), v.end());

	cout << x;
}