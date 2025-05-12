#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 줄 수 만큼 반복
    for (int i = 1; i <= n; i++) {
        // (1) 공백 출력: n - i개
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        // (2) 별 출력: 2 * i - 1개
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        // (3) 줄바꿈
        cout << "\n";
    }

    return 0;
}
