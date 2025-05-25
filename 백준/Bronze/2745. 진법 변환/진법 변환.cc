#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    string N;
    int B;
    cin >> N >> B;

    int result = 0;
    int power = 1;

    for (int i = N.size() - 1; i >= 0; --i) {
        char c = N[i];
        int value;

        if ('0' <= c && c <= '9') {
            value = c - '0';
        }
        else if ('A' <= c && c <= 'Z') {
            value = c - 'A' + 10;
        }

        result += value * power;
        power *= B;
    }

    cout << result << '\n';

    return 0;
}