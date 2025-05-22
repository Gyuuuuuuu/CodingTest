#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int solution(int a, int b) {
    int c = gcd(a, b);
    int answer = 0;
    b /= c;
    
    while(b%2==0) b/=2;
    while(b%5==0) b/=5;
    
    if(b==1) answer = 1;
    else answer = 2;
    
    return answer;
}