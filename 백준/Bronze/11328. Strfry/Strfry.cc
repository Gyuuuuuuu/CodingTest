#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() != s2.length()) {
            cout << "Impossible\n";
        }
        else {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 == s2)
                cout << "Possible\n";
            else
                cout << "Impossible\n"; // 이 줄이 추가되어야 함
        }
    }
    return 0;
}