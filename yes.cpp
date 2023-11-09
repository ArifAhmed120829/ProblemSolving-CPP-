
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for(int i =0; i<t; i++){
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s=="YES") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;

}


