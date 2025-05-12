#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector <int> threeNum(3);
	for (int i = 0; i < threeNum.size(); i++) {
		cin >> threeNum[i];
	}

	sort(threeNum.begin(), threeNum.end());

	for (int i : threeNum) {
		cout << i << " ";
	}	
}