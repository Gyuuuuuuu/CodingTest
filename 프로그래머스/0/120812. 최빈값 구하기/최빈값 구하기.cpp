#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
vector<int> v(1001, 0);
for (int i : array){
	v[i]++;
	}
int max_fre = 0;
int max_ind = 0;
    
for (int i = 0; i < v.size(); i++) {
	if (max_fre < v[i]) {
        max_ind = i;
        max_fre = v[i];
                         }
}

int cnt = 0;
for (int i = 0; i < v.size(); i++) {
	if (max_fre == v[i]) cnt++;
}
    
if(cnt>1){
    max_ind = -1;
    return max_ind;
}else{
    return max_ind;
}

}