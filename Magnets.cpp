

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s[n];
    int c = 1;
    for(int i = 0; i<n;i++){
       cin>>s[i];

    }
     for(int i = 0; i+1<n;i++){
         if(s[i] != s[i+1]) c++;
     }
     cout<<c<<endl;





    return 0;

}

