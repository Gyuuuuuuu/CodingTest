#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int count = 0;

    while (n--) {
        string word;
        cin >> word;

        set<char> seen;
        bool isGroup = true;
        char prev = 0;

        for (char c : word) {
            if (c != prev) {
                if (seen.count(c)) {
                    isGroup = false;
                    break;
                }
                seen.insert(c);
            }
            prev = c;
        }

        if (isGroup) count++;
    }

    cout << count << endl;    
}