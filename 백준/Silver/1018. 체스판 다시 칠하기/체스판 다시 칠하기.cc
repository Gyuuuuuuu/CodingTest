#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, w;
    cin >> h >> w;

    vector<vector<char>> board(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> board[i][j];
        }
    }

    int minPaint = 1e9;

    // 모든 8x8 영역 검사
    for (int i = 0; i <= h - 8; i++) {
        for (int j = 0; j <= w - 8; j++) {
            int cntW = 0; // 시작이 W인 체스판
            int cntB = 0; // 시작이 B인 체스판

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char expectedW = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char expectedB = ((x + y) % 2 == 0) ? 'B' : 'W';

                    if (board[i + x][j + y] != expectedW) cntW++;
                    if (board[i + x][j + y] != expectedB) cntB++;
                }
            }
            minPaint = min({ minPaint, cntW, cntB });
        }
    }

    cout << minPaint;
}

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, w;
    cin >> h >> w;

    vector<vector<char>> board(h, vector<char>(w));
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> board[i][j];

    // 패턴1: (0,0)이 'W'인 체스판
    vector<vector<char>> v(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        if (i % 2 == 0) v[i][0] = 'W';
        else v[i][0] = 'B';

        for (int j = 1; j < w; j++) {
            if (v[i][j - 1] == 'W') v[i][j] = 'B';
            else v[i][j] = 'W';
        }
    }

    // 패턴2: (0,0)이 'B'인 체스판
    vector<vector<char>> v0(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        if (i % 2 == 0) v0[i][0] = 'B';
        else v0[i][0] = 'W';

        for (int j = 1; j < w; j++) {
            if (v0[i][j - 1] == 'W') v0[i][j] = 'B';
            else v0[i][j] = 'W';
        }
    }

    int ans = 1e9;

    // 8x8 크기만큼 전부 슬라이딩 윈도우 돌기
    for (int i = 0; i <= h - 8; i++) {
        for (int j = 0; j <= w - 8; j++) {
            int cntW = 0, cntB = 0;
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    if (board[i + x][j + y] != v[i + x][j + y]) cntW++;
                    if (board[i + x][j + y] != v0[i + x][j + y]) cntB++;
                }
            }
            ans = min(ans, min(cntW, cntB));
        }
    }

    cout << ans;
}*/
