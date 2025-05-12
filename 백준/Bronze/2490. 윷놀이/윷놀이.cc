#include<bits/stdc++.h>
using namespace std;

int main() {
	//1 A, 2 B, 3 C, D 0, E 4
	vector <int> c(4);
	for (int j = 0; j < 3; j++) {
		int cnt = 0;
		for (int i = 0; i < c.size(); i++) {			
			cin >> c[i];
			if (c[i] == 1) cnt++;
		}
		if (cnt == 4) {
			cout << "E\n";
		}
		if (cnt == 3) {
			cout << "A\n";
		}
		if (cnt == 2) {
			cout << "B\n";
		}
		if (cnt == 1) {
			cout << "C\n";
		}
		if (cnt == 0) {
			cout << "D\n";
		}
	}
}