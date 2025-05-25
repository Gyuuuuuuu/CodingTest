#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = s.length();

	for (char c : s) {
		if (c == 'A' || c == 'B' || c == 'C') cnt += 2;
		if (c == 'D' || c == 'F' || c == 'E') cnt += 3;
		if (c == 'H' || c == 'I' || c == 'G') cnt += 4;
		if (c == 'K' || c == 'L' || c == 'J') cnt += 5;
		if (c == 'N' || c == 'O' || c == 'M') cnt += 6;
		if (c == 'Q' || c == 'R' || c == 'P' || c=='S') cnt += 7;
		if (c == 'T' || c == 'U' || c == 'V') cnt += 8;
		if (c == 'X' || c == 'Y' || c == 'Z' || c=='W') cnt += 9;
	}
	cout << cnt;
}