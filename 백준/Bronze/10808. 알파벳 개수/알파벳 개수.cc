#include<bits/stdc++.h>
using namespace std;
int main() {	
	string s;	
	cin >> s;

	vector <int> v(26, 0);

	for (char c : s) {
		v[c - 'a']++;
	}

	for (int i : v) cout << i<<" ";
}