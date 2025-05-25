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