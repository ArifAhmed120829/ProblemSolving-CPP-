
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int diff_socks = 0;
    int same_socks = 0;
    if(a==b) diff_socks = a;
    else{
          while(a>1 ||b>1){
        if(a!=0 && b!=0){
            diff_socks++;
            a--;
            b--;
        }
        else if(a==0) {
            b = b-2;
            same_socks++;
        }
        else if(b==0) {
            a = a-2;
            same_socks++;
        }
    }
    }
    cout<<diff_socks<<" "<<same_socks<<endl;

    return 0;

}


