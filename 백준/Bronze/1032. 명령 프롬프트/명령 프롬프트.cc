#include<iostream>
using namespace std;
int main() {
	int test_case, t;
	cin >> test_case;
	string result = " ";
	for (t = 0; t < test_case; t++) {
		string input;
		cin >> input;
		if (result == " ") {
			result = input;
		}
		else {
			for (int i = 0; i < result.size(); i++) {
				if (result[i] != input[i]) result[i] = '?';
			}
		}
	}
	cout << result;
}