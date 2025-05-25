#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string answer;
		cin >> answer;
		int cnt = 0, total = 0;				

		for (char c : answer) {			
			if (c == 'O') {
				cnt++;
				total += cnt;
			}
			else {
				cnt = 0;
			}					
		}
		cout << total <<"\n";
	}
}