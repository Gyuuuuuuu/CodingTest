#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;

    int diagonal = 1;  // 현재 대각선 번호
    int sum = 1;       // 현재 대각선까지의 합

    // X가 속한 대각선 찾기
    while (sum < X) {
        diagonal++;
        sum += diagonal;
    }

    // X가 대각선에서 몇 번째인지 계산
    int indexInDiagonal = X - (sum - diagonal);

    int numerator, denominator;
    if (diagonal % 2 == 0) { // 짝수 번째 대각선 (아래 방향)
        numerator = indexInDiagonal;
        denominator = diagonal - indexInDiagonal + 1;
    } else { // 홀수 번째 대각선 (위쪽 방향)
        numerator = diagonal - indexInDiagonal + 1;
        denominator = indexInDiagonal;
    }

    cout << numerator << "/" << denominator << endl;

    return 0;
}
