#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int count = 0;
    while (X > 0) {
        count += (X & 1); // X의 마지막 비트가 1이면 카운트 증가
        X >>= 1; // X를 오른쪽으로 한 칸 이동 (2로 나누기)
    }

    cout << count << endl; // 1의 개수 출력
}
