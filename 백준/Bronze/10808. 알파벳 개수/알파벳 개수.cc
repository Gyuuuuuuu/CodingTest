#include<bits/stdc++.h>
using namespace std;
int main() {	
	string s;	
	cin >> s;

	vector <int> v(26, 0);
	
	for (int i = 0; i < s.length(); i++) {
		int temp;
		temp = s[i];
		v[temp-97]++;
	}
	for (int i : v) cout << i<<" ";
}