#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int w, h, n;
		cin >> w >> h >> n;

		vector<vector<int>> v (w, vector<int>(h));		
		 	
		for (int j = 0; j < w; j++) {
			v[j][0] = (j + 1) * 100 + 1;
			for (int k = 1; k < h; k++) {
				v[j][k]=1 + v[j][k-1];
			}			
		}

		int cnt = 0;

		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				cnt++;
				if (cnt == n) cout << v[k][j] << "\n";									
			}			
		}

	}
}