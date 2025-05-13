#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n, 0));

        int r = 0, c = 0;
        int dir = 0; // 방향: 오른쪽(0), 아래(1), 왼쪽(2), 위(3)

        int dr[] = { 0, 1, 0, -1 };
        int dc[] = { 1, 0, -1, 0 };

        for (int i = 1; i <= n * n; i++) {
            v[r][c] = i;

            int nextr = r + dr[dir];
            int nextc = c + dc[dir];

            // 벽을 넘거나 이미 방문했으면 방향 전환
            if (nextr < 0 || nextr >= n || nextc < 0 || nextc >= n || v[nextr][nextc] != 0) {
                dir = (dir + 1) % 4;
                nextr = r + dr[dir];
                nextc = c + dc[dir];
            }

            r = nextr;
            c = nextc;
        }

        cout << "#" << t << "\n";
        // 출력
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j] << " ";  // setw(3) 제거
            }
            cout << '\n';
        }
    }
}
