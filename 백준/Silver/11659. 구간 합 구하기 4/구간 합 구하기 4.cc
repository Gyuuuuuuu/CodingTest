#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; // n = 수의 개수, m = 합을 구해야 하는 횟수
    cin >> n >> m;

    vector<int> nc(n + 1, 0);
    vector<int> prefix(n + 1, 0);

    // 배열 입력 및 누적 합 계산
    for (int i = 1; i <= n; i++) {
        cin >> nc[i];
        prefix[i] = prefix[i - 1] + nc[i]; // 누적 합 저장
    }

    // 구간 합 빠르게 계산
    for (int t = 0; t < m; t++) {
        int i, j;
        cin >> i >> j;

        // 누적 합을 이용한 구간 합 계산
        cout << prefix[j] - prefix[i - 1] << '\n';
    }

    return 0;
}
