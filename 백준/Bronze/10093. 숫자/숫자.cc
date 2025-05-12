#include<bits/stdc++.h>
using namespace std;
int main() {
	long long startN, endN;
	cin >> startN >> endN;
	if (startN > endN) {
		swap(startN, endN);
	}
	if (endN - startN - 1 == -1) {
		cout << 0 << "\n";
	} else {
	cout << endN - startN -1 << "\n";
	}
	
	for (int i = startN+1; i < endN; i++) {
		cout << i << " ";
	}	
}