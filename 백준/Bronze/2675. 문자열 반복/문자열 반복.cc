#include<bits/stdc++.h>
using namespace std;

int main() {
	int test_case, repeat;
	string s;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		cin >> repeat >> s;

		for (char c : s) {
			for (int j = 0; j < repeat; j++) {
				cout << c;
			}			
		}
		cout << "\n";
	}
}