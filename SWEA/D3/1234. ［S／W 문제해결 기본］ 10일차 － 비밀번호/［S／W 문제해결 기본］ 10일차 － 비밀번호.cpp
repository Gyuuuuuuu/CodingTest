#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T = 10; 


    for (int test_case = 1; test_case <= T; ++test_case) {
        int N; 
        string s; 
        cin >> N >> s;

        vector<char> stack;

        for (char c : s) {
            if (!stack.empty() && stack.back() == c) {
                stack.pop_back();
            }
            else {
                stack.push_back(c);
            }
        }
        


        cout << '#' << test_case << ' ' << string(stack.begin(), stack.end())<< "\n";
    }
    return 0;
}
