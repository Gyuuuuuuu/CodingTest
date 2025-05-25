#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.length(); i++) {
        // "dz=" 처리 (가장 먼저)
        if (i < s.length() - 2 && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
            cnt++;
            i += 2;
        }
        // 나머지 2글자 크로아티아 알파벳
        else if (i < s.length() - 1) {
            if ((s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) ||
                (s[i] == 'd' && s[i + 1] == '-') ||
                (s[i] == 'l' && s[i + 1] == 'j') ||
                (s[i] == 'n' && s[i + 1] == 'j') ||
                (s[i] == 's' && s[i + 1] == '=') ||
                (s[i] == 'z' && s[i + 1] == '=')) {
                cnt++;
                i++;
            } else {
                cnt++;
            }
        }
        // 일반 알파벳 1글자
        else {
            cnt++;
        }
    }

    cout << cnt;
}