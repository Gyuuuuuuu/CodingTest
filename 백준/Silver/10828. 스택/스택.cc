#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	stack <int> s;

	for (int i = 0; i < T; i++) {
		string command;
		int pushInt;
		cin >> command;

		if (command == "push") {
			cin >> pushInt;
			s.push(pushInt);
		}
		if (command == "pop") {
			if (s.empty()) {
				cout << "-1" << "\n";
			}else{
			cout << s.top() << "\n";
			s.pop();
			}
		}
		if (command == "size") {
			cout << s.size() << "\n";
		}
		if (command == "empty") {
			if (s.empty()) {
				cout << "1" << "\n";
			}
			else cout << "0\n";
		}
		if (command == "top") {
			if (s.empty()) {
				cout << "-1" << "\n";
			} else {				
				cout << s.top() << "\n";
			}
		}		
	}
}