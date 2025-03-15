#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string a;

    cin >> n >> a;  

    int sum = 0;
    int len = a.length();

    for (int i = max(0, len - n); i < len; i++) {
        sum += (a[i] - '0');  
    }

    cout << sum;
}
