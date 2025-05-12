#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> times(n);
    for (int& t : times) {
        cin >> t;
    }

    int y_total = 0, m_total = 0;
    for (int t : times) {
        y_total += (t / 30 + 1) * 10;
        m_total += (t / 60 + 1) * 15;
    }

    if (y_total < m_total) {
        cout << "Y " << y_total << "\n";
    } else if (m_total < y_total) {
        cout << "M " << m_total << "\n";
    } else {
        cout << "Y M " << y_total << "\n";
    }

    return 0;
}
