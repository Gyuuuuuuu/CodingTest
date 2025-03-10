#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    // Handle empty string case
    if (s.empty()) {
        cout << 0;
        return 0;
    }

    int cnt = 0;
    bool inWord = false;

    for (char c : s) {
        if (c != ' ') {
            if (!inWord) {
                cnt++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << cnt;
}
