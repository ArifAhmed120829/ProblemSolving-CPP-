

#include <iostream>
#include <string>
#include <cctype> // for toupper function
#include <algorithm> // for std::sort
using namespace std;
int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
       for (char &c : str) {
        c = toupper(c);
    }
    int count = 0;
    sort(str.begin(), str.end());
    for(int i =0; i<n; i++){
        if(str[i] != str[i+1]) count++;
    }
    if(count==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}


