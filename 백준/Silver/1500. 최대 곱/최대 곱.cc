#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long S, K;
    cin >> S >> K;

    long long base = S / K;  // 기본값
    long long extra = S % K; // 추가로 1을 더해야 하는 개수
    long long result = 1;

    // (K - extra)개는 base, extra개는 base + 1
    for (int i = 0; i < K - extra; i++) {
        result *= base;
    }
    for (int i = 0; i < extra; i++) {
        result *= (base + 1);
    }

    cout << result << endl;
}
