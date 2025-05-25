#include<bits/stdc++.h>
using namespace std;

int main() {
	string n1, n2;
	cin >> n1 >> n2;

	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());
	
	int result1 = stoi(n1);
	int result2 = stoi(n2);

	result1 > result2 ? cout << result1 : cout << result2;
}