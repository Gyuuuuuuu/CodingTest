#include <iostream>
#include <cmath>
using namespace std;

int N;
int board[15]; // board[i] = i번째 행의 퀸이 위치한 열
int count = 0;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

void solve(int row) {
    if (row == N) {
        count++;
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    cin >> N;
    solve(0);
    cout << count << '\n';
    return 0;
}
