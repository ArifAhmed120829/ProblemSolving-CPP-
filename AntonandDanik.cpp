

#include <iostream>
using namespace std;
int main() {

    int n;
    string s;
    cin>>n;
    cin>>s;
    int Anton = 0;
    int Danik = 0;

    int last_digit;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == 'A') Anton++;
        else Danik++;
    }
    if(Anton>Danik) cout<<"Anton"<<endl;
     else if(Anton<Danik) cout<<"Danik"<<endl;
     else cout<<"Friendship"<<endl;

    return 0;

}


