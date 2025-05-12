#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int sum;
    cin >> sum;

    sort(v.begin(), v.end());  // 정렬 먼저

    int left = 0, right = n - 1, cnt = 0;

    while (left < right) {
        int temp = v[left] + v[right];

        if (temp == sum) {
            cnt++;
            left++;
            right--;
        }
        else if (temp < sum) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << cnt;
    return 0;
}
