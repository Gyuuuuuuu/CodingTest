#include <iostream>
using namespace std;

int main() { // 이항 계수 계산 (nCm)
    int test_case, n, m;
    cin >> test_case;

    for (int tc = 0; tc < test_case; ++tc) {
        cin >> m >> n;        

        long long result = 1;
        for (int i = 0; i < m; i++) {
            result *= (n - i);
            result /= (i + 1);  // 올바른 계산식
        }

        cout << result << endl;
    }
}
