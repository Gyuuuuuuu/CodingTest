#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, rs;
	cin >> s;
	rs = s;
	reverse(s.begin(), s.end());

	cout << (rs == s ? 1 : 0);
}