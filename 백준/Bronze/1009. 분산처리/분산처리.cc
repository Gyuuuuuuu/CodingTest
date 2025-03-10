#include<iostream>
#include<vector>
using namespace std;


int square(int a, int b) {
	int ans = 1;
	for (int i = 0; i < b; i++) {
		ans = (a*ans)%10;
	}
	return ans;
}

int main() {
	int test_case, T;
	cin >> test_case;

	for (T=0; T < test_case; T++) {
		int a, b, ans;
		cin >> a >> b;

		ans = square(a, b);
		if (ans == 0) ans = 10;
		cout << ans << "\n";	
	}
}