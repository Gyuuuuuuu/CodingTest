#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int dial = 0;

    for (char ch : s) {
        if (ch <= 'C') dial += 3;
        else if (ch <= 'F') dial += 4;
        else if (ch <= 'I') dial += 5;
        else if (ch <= 'L') dial += 6;
        else if (ch <= 'O') dial += 7;
        else if (ch <= 'S') dial += 8;
        else if (ch <= 'V') dial += 9;
        else dial += 10;
    }

    cout << dial << '\n';
}
