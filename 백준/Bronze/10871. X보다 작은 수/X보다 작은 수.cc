#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, n;
    cin >> s >> n;
    int arr[s] = {};
    
    for(int i=0; i<s; i++){
        int a;
        cin >>  a;
        arr[i] = a;
        
        if(arr[i] < n)
            cout << arr[i]<< ' ';
    }
}
