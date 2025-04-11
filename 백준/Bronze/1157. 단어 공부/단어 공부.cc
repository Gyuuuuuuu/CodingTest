#include <iostream>
#include <string>
#include <map>
#include <cctype> // for toupper

using namespace std;

int main() {
    string word;
    cin >> word;

    map<char, int> freq;

    // 대문자로 바꾸고 개수 세기
    for (char c : word) {
        c = toupper(c);
        freq[c]++;
    }

    int maxCount = 0;
    char result = '?';

    for (auto& p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            result = p.first;
        }
        else if (p.second == maxCount) {
            result = '?';
        }
    }

    cout << result << '\n';
    return 0;
}
