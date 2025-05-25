#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char c;	
	string asc = "12345678";
	string des = "87654321";
	string input;
	
	for (int i = 0; i < 8; i++) {
		cin >> c;
		input += c;
	}

	if (input == asc) cout << "ascending";
	else if (input == des) cout << "descending";
	else cout << "mixed";
}