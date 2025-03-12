#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int cntP = 0;
int cntY = 0;

for (char c : s) {
	if (c == 'p' || c == 'P') cntP++;
	if (c == 'y' || c == 'Y') cntY++;
}

if (cntP == 0 && cntY == 0) {
	return true;
}
else if (cntP == cntY) {
	return true;
}
else return false;
}