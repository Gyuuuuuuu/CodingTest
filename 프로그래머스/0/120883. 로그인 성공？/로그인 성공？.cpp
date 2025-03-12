#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    for (int i = 0; i < db.size(); i++) {
	if (id_pw[0] == db[i][0]) {  // 아이디가 같은 경우
		if (id_pw[1] == db[i][1]) {  // 비밀번호까지 같은 경우
			answer = "login";
		}
		else {  // 아이디는 같지만 비밀번호가 다른 경우
			answer = "wrong pw";
		}
		break;  // 더 이상 탐색할 필요 없음
	}
}

    
    return answer;
}