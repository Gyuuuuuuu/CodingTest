#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;	
	cin >> s;

	int cnt = s.length();

	for (int i = 0; i < s.length(); i++) {
		if (i < s.length() - 2) {
			if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
				cnt -= 2;
				i += 2;
			}
		}
		if (i < s.length() - 1) {
			if (s[i] == 'c' && s[i + 1] == '=' ||
				s[i] == 'c' && s[i + 1] == '-' ||
				s[i] == 'd' && s[i + 1] == '-' ||
				s[i] == 'l' && s[i + 1] == 'j' || 
				s[i] == 'n' && s[i + 1] == 'j' || 
				s[i] == 's' && s[i + 1] == '=' ||
				s[i] == 'z' && s[i + 1] == '=') {
				cnt--;
				i++;
			}
		}		
	}
	cout << cnt;
}