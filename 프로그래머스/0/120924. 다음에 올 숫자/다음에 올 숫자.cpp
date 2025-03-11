#include <string>
#include <vector>

using namespace std;

int solution(vector<int> c) {                   
    vector<int> v(c.size() - 1, 0);

    int answer = c[0];    
    float d = (float)c[1] / (float)c[0];

    for (int i = 0; i < c.size() - 1; i++) {
        v[i] = c[i + 1] - c[i];
    }

    if (v[0] == v[1]) {
        answer = c.back()+v[0];
    }    
    else if (v[0] != v[1]) {
        answer = c.back() * d;
    }

    
    return answer;
    
}
