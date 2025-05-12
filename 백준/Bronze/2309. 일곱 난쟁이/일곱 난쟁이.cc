#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(9);
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    bool found = false;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - v[i] - v[j] == 100) {
                // i, j 인덱스를 제외하고 출력
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << v[k] << "\n";
                    }
                }
                found = true;
                break;
            }
        }
        if (found) break;
    }

    return 0;
}
