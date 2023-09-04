

#include <iostream>
using namespace std;
int main() {

    string s;
    string t;
    cin>>s;
    cin>>t;
    string res = "";

    for(int i = s.size() - 1; i>=0;i--){
        res = res + s[i];
    }
    if(res==t)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}


