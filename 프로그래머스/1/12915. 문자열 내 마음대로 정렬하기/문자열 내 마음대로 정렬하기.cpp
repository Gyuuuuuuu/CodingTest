#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    // 정렬 함수 사용: n번째 문자를 기준으로 정렬
    sort(strings.begin(), strings.end(), [n](const string &a, const string &b) {
        if (a[n] == b[n]) 
            return a < b;  // n번째 문자가 같으면 사전순 정렬
        return a[n] < b[n]; // n번째 문자가 다르면 해당 문자 기준 정렬
    });

    return strings;
}
