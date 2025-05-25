#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int c;
	cin >> c;
		
	for (int i = 0; i < c/4; i++) {
		cout << "long ";
	}
	if (c % 4 > 0) cout << "long ";		
	cout << "int";		
}