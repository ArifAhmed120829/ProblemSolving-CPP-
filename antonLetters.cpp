


#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    int c;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i =0; i<s.size(); i++){
        if(s[i] == '{' || s[i] == '}' ||s[i] == ',' ||s[i] == ' ') continue;
        if(s[i] != s[i+1]) c++;
    }
    cout<<c<<endl;
    return 0;

}

