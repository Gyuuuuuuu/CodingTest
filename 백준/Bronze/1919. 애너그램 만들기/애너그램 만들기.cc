#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> v1(26, 0), v2(26, 0);

    for (char c : s1) v1[c - 'a']++;
    for (char c : s2) v2[c - 'a']++;

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        cnt += abs(v1[i] - v2[i]);
    }

    cout << cnt << '\n';
}
