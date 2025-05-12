#include<bits/stdc++.h>
using namespace std;
int main() {
	vector <int> card(20);
	for (int i = 0; i < card.size(); i++) {
		card[i] = i+1;
	}
	int startN= 3, endN=4;
	for (int j = 0; j < 10; j++) {
		cin >> startN >> endN;
		reverse(card.begin() + (startN - 1), card.begin() + endN);
	}

	for (int c : card) cout << c << " ";	
}