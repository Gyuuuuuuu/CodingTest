#include<bits/stdc++.h>
using namespace std;
int main() {
	int v[100][100] = { 0, };
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++)
				v[j][k] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (v[i][j] == 1) cnt++;
		}
	}
	cout << cnt;
}