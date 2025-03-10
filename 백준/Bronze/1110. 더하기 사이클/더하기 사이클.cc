#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int original = n;
    int count = 0;
    
    do {
        int tens = n / 10;
        int ones = n % 10;
        int sum = tens + ones;
        n = (ones * 10) + (sum % 10);
        count++;
    } while (n != original);
    
    cout << count << endl;
    return 0;
}
