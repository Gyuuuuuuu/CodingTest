#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v(15000, 0);
	for (int i = 1; i < 10001; i++) {
		if (i < 10) {
			if ((i % 10) + i + (i / 10) < 10001)
			v[(i % 10) + i + (i / 10)]++;
		}
		if (i> 9 && i < 100) {
			if ((i % 10) + (i / 10 % 10) + i < 10001)
				v[(i % 10) + (i / 10 % 10) + i]++;
		}
		if (i > 99 && i < 1000) {
			if ((i % 10) + (i / 10 % 10) + (i / 100 % 10) + i < 10001)
				v[(i % 10) + (i / 10 % 10) + (i / 100 % 10) + i]++;
		}		
		if (i > 999 && i < 10000) {//9999
			if ((i % 10)+ (i/10 % 10)+ (i/100 % 10) + (i/1000) + i< 10001)
				v[(i % 10) + (i / 10 % 10) + (i / 100 % 10) + (i / 1000) + i]++;
		}
	}
	for (int i = 1; i < 10001; i++) {
		if (v[i] == 0) cout << i << "\n";
	}

}