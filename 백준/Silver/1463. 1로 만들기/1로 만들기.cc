#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x;
    cin >> x;

    vector<int> dp(x + 1, 0);  // dp[i]: i를 1로 만들기 위한 최소 연산 횟수

    for (int i = 2; i <= x; i++) {
        dp[i] = dp[i - 1] + 1;  // 기본적으로 -1 하는 경우

        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }

    cout << dp[x] << endl;
    return 0;
}
