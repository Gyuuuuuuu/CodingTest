#include<iostream>
using namespace std;

void compare(int a, int b){
string c;
    if(a>b)c=">";
    if(a<b)c="<";
    if(a==b)c="==";
cout << c;
}

int main(){
    int a, b;
cin>>a>>b;
    compare(a, b);
}