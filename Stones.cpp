
#include <iostream>
using namespace std;
int main() {
    string s;
    int n;
    cin>>n;
    cin>>s;
    int count = 0;
    int i = 0;
    int j = i+1;
    for( i = 0; j<s.size(); i++){
        if(s[i] == s[j]) count++;
        j++;
    }
     cout<<count<<endl;
    return 0;

}

