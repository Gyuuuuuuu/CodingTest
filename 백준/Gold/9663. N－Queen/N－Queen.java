import java.util.Scanner;

public class Main {
    static int N;
    static int[] board; // board[i] = i번째 행의 퀸이 위치한 열
    static int count = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        board = new int[N];

        solve(0);
        System.out.println(count);
    }

    public static void solve(int row) {
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

    public static boolean isSafe(int row, int col) {
        for (int i = 0; i < row; i++) {
            // 같은 열 or 대각선
            if (board[i] == col || Math.abs(board[i] - col) == Math.abs(i - row)) {
                return false;
            }
        }
        return true;
    }
}
