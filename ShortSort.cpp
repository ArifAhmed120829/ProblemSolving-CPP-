

#include <iostream>
using namespace std;
int main() {
    int t;
    string s;
    cin>>t;
    for(int i =0; i<t; i++){
        cin>>s;
        if(s[0] != 'a' && s[1] != 'b' && s[2] != 'c') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;

}

