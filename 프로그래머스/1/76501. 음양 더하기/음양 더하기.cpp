#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ab, vector<bool> signs) {
int sum = 0;
for (int i = 0; i < ab.size(); i++) {
	if (signs[i] == true) {
		continue;
	}
	else {
		ab[i] = -ab[i];
	}		
}

for (int i : ab) {
	sum += i;
}
    return sum;
}