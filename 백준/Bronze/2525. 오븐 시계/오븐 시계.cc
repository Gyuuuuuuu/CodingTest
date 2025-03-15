#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    m += s;  // 초를 분에 더하기

    h += m / 60;  // 넘친 분을 시간으로 변환
    m %= 60;  // 남은 분

    h %= 24;  // 24시간 형식으로 변환

    cout << h << " " << m << endl;
    return 0;
}
