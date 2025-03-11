public class Solution {
    public int solution(int[][] board) {
        int answer = 0;
        int x = board.length + 2;
        int y = x;
        int[][] v = new int[x][y];

        // 보드 상태를 확장 보드 v에 복사
        for (int i = 1; i < board.length + 1; i++) {
            for (int j = 1; j < board[0].length + 1; j++) {
                v[i][j] = board[i - 1][j - 1];
            }
        }

        // v 배열에서 1인 위치를 기준으로 8방향을 1로 설정
        for (int i = 1; i < board.length + 1; i++) {
            for (int j = 1; j < board[0].length + 1; j++) {
                if (v[i][j] == 1) {
                    if(v[i - 1][j - 1] == 0)v[i - 1][j - 1] = 2;  // 왼쪽 위
                    if(v[i - 1][j] == 0)v[i - 1][j] = 2;      // 위
                    if(v[i - 1][j + 1] == 0)v[i - 1][j + 1] = 2;  // 오른쪽 위
                    if(v[i][j - 1] == 0)v[i][j - 1] = 2;      // 왼쪽
                    if(v[i][j + 1] == 0)v[i][j + 1] = 2;      // 오른쪽
                    if(v[i + 1][j - 1] == 0)v[i + 1][j - 1] = 2;  // 왼쪽 아래
                    if(v[i + 1][j] == 0)v[i + 1][j] = 2;      // 아래
                    if(v[i + 1][j + 1] == 0)v[i + 1][j + 1] = 2;  // 오른쪽 아래
                }
            }
        }

        // 안전 구역 계산: v 배열에서 0인 부분이 안전한 곳
        for (int i = 1; i < board.length + 1; i++) {
            for (int j = 1; j < board[0].length + 1; j++) {
                if (v[i][j] == 0) {
                    answer++;
                }
            }
        }

        return answer;
    }
}
