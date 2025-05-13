#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int T = 10;
	int test_case;

	for (test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int colMax = 0, rowMax = 0, crossMax = 0, crossMax1 = 0;

		vector<vector<int>> v(100, vector<int>(100));

		for (int i = 0; i < 100; i++) {
			for(int j=0; j<100; j++)
				cin >> v[i][j];
		}
			
		for (int i = 0; i < 100; i++) {
			int tmp = 0;
			for (int j = 0; j < 100; j++) {
				tmp += v[i][j];
			}
			colMax = max(tmp, colMax);
		}
		
		for (int i = 0; i < 100; i++) {
			int tmp = 0;
			for (int j = 0; j < 100; j++) {
				tmp += v[j][i];
			}
			rowMax = max(tmp, rowMax);
		}

		for (int i = 0; i < 100; i++) {
			crossMax += v[i][i];
		}

		for (int i = 0; i < 100; i++) {
			crossMax1 += v[i][99-i];
		}

		int a=0,b=0, c=0;
		a = max(colMax, rowMax);
		b = max(crossMax, crossMax1);
		c = max(a, b);
	
		cout << '#' << test_case << ' ' << c<<"\n";
	}
}