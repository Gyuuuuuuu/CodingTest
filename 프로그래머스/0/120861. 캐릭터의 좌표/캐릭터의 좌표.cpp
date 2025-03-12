#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> key, vector<int> board) {
     
    vector<int> answer = { 0, 0 };

    int xLimit = board[0] / 2;
    int yLimit = board[1] / 2;

    for (const string& k : key) {
        if (k == "left") answer[0]--;
        else if (k == "right") answer[0]++;
        else if (k == "up") answer[1]++;
        else if (k == "down") answer[1]--;

        // 경계 값 조정
        answer[0] = max(-xLimit, min(xLimit, answer[0]));
        answer[1] = max(-yLimit, min(yLimit, answer[1]));
    }
    return answer;
}