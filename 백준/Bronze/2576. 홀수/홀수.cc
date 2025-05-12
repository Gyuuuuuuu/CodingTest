#include<bits/stdc++.h>
using namespace std;
int main() {
	vector <int> v(7);
	int sum = 0;
	int mOdd = 101;
	for (int i = 0; i < v.size(); i++) {	
		cin >> v[i];
		if (v[i] % 2 != 0) {
			sum += v[i];
			if (v[i] < mOdd) mOdd = v[i];
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << mOdd;
	}

}