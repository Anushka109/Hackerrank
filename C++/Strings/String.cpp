#include <iostream>
#include <string>
using namespace std;

int main() {
      
      string s,ss;
      cin>>s>>ss;
      cout<<s.length()<<" "<<ss.length()<<" "<<endl;
      string c=s+ss;
      cout<<c<<endl;
       string m=" ";
       m[0]=s[0];
       s[0]=ss[0];
       ss[0]=m[0];
      cout<<s<<" ";
      cout<<ss;
    return 0;
}
