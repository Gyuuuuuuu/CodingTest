#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<vector<char>> chess(8, vector<char>(8, '.'));

	for (int i = 0; i < chess.size(); i++) {
		for (int j = 0; j < chess.size(); j++) {
			cin >> chess[i][j];
		}
	}

		/*00 02 04 06
		11 13 15 17
		20 22 24 26
		31 33 35 37*/
		int cnt = 0;
		for (int i = 0; i < chess.size(); i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < chess.size(); j += 2) {
					if (chess[i][j] == 'F') cnt++;
				}
			}
			else {
				for (int j = 1; j < chess.size(); j += 2) {
					if (chess[i][j] == 'F') cnt++;
				}
			}
	}
		cout << cnt;
}