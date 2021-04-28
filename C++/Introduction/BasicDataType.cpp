#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;long o;
    char b;
    float c;
    double d;
    cin>>a>>o>>b>>c>>d;
    cout<<a<<endl<<o<<endl<<b<<endl;
    cout<<fixed<<setprecision(3)<<c<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    return 0;
}
