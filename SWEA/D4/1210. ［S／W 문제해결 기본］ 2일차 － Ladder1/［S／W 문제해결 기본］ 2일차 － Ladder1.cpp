#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int test_case;
    int T = 10;

    for (test_case = 1; test_case <= T; ++test_case) {
        int t;
        cin >> t;
        int x = 99, y;
        vector<vector<int>> v(100, vector<int>(100));

        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                cin >> v[i][j];
                if (v[i][j] == 2) {
                    x = i;
                    y = j;
                }
            }
        }

        while (x >= 0) {
            if (y - 1 >= 0 && v[x][y - 1] == 1) {
                while (y - 1 >= 0 && v[x][y - 1] == 1) {
                    y--;
                }
                x--;
            } else if (y + 1 < 100 && v[x][y + 1] == 1) {
                while (y + 1 < 100 && v[x][y + 1] == 1) {
                    y++;
                }
                x--;
            } else {
                x--;
            }
        }

        cout << '#' << test_case << ' ' << y << "\n";
    }

    return 0;
}
